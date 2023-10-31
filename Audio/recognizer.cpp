#include"C:/Code/Qt/Audio/Audio/recognizer.h"
#include <synchapi.h>
#include<QMessageBox>
#include<QDebug>

#include <iostream>
#include <fstream>
#include <string>
#include <QTextCodec>

#include <chrono>
#include <thread>

/* wav音频头部格式 */
typedef struct _wave_pcm_hdr
{
    char            riff[4];                // = "RIFF"
    int				size_8;                 // = FileSize - 8
    char            wave[4];                // = "WAVE"
    char            fmt[4];                 // = "fmt "
    int				fmt_size;				// = 下一个结构体的大小 : 16

    short int       format_tag;             // = PCM : 1
    short int       channels;               // = 通道数 : 1
    int				samples_per_sec;        // = 采样率 : 8000 | 6000 | 11025 | 16000
    int				avg_bytes_per_sec;      // = 每秒字节数 : samples_per_sec * bits_per_sample / 8
    short int       block_align;            // = 每采样点字节数 : wBitsPerSample / 8
    short int       bits_per_sample;        // = 量化比特数: 8 | 16

    char            data[4];                // = "data";
    int				data_size;              // = 纯数据长度 : FileSize - 44
} wave_pcm_hdr;

/* 默认wav音频头部数据 */
wave_pcm_hdr default_wav_hdr =
    {
        { 'R', 'I', 'F', 'F' },
        0,
        {'W', 'A', 'V', 'E'},
        {'f', 'm', 't', ' '},
        16,
        1,
        1,
        16000,
        32000,
        2,
        16,
        {'d', 'a', 't', 'a'},
        0
};


#define	BUFFER_SIZE	4096
#define FRAME_LEN	640
#define HINTS_SIZE  100

const char* loginparams = "appid = 1681e85f, work_dir = ."; // 登录参数，appid与msc库绑定,请勿随意改动
const char* session_begin_params = "sub = iat, domain = iat, language = zh_cn, accent = mandarin, sample_rate = 16000, result_type = plain, result_encoding = gb2312";

const char* session_begin_params2 = "engine_type = cloud, voice_name = x4_lingxiaoyao_em, text_encoding = UTF-8, sample_rate = 16000, speed = 75, volume = 55, pitch = 75, rdn = 3";


recognizer::recognizer()
{
    login();
}

void recognizer::login()
{
    int			ret = MSP_SUCCESS;
    int			upload_on = 1; //是否上传用户词表

    /* 用户登录 */
    ret = MSPLogin(NULL, NULL, loginparams); //第一个参数是用户名，第二个参数是密码，均传NULL即可，第三个参数是登录参数
    if (MSP_SUCCESS != ret)
    {
        printf("MSPLogin failed , Error code %d.\n", ret);
        qDebug() << "00" << "+++++++++";
    }
}


QString recognizer::runIAT(const char* audio_file)
{
    // 实现语音听写的逻辑
    const char* session_id = NULL;
    char			rec_result[BUFFER_SIZE] = { NULL };
    char			hints[HINTS_SIZE] = { NULL }; //hints为结束本次会话的原因描述，由用户自定义
    unsigned int	total_len = 0;
    int				aud_stat = MSP_AUDIO_SAMPLE_CONTINUE;		//音频状态
    int				ep_stat = MSP_EP_LOOKING_FOR_SPEECH;		//端点检测
    int				rec_stat = MSP_REC_STATUS_SUCCESS;			//识别状态
    int				errcode = MSP_SUCCESS;


    QString qString_res;

    long			pcm_count = 0;
    long			pcm_size = 0;
    long			read_size = 0;

    FILE* f_pcm = NULL;
    char* p_pcm = NULL;
    if (NULL == audio_file)
    {
        qDebug() << "2";
        goto iat_exit;
    }

    f_pcm = fopen(audio_file, "rb");
    if (NULL == f_pcm)
    {
        qDebug() << "3:"<< audio_file;
        goto iat_exit;
    }

    qDebug() << "4";

    fseek(f_pcm, 0, SEEK_END);
    pcm_size = ftell(f_pcm); //获取音频文件大小
    fseek(f_pcm, 0, SEEK_SET);

    p_pcm = (char*)malloc(pcm_size);
    if (NULL == p_pcm)
    {
        qDebug() << "5";
        goto iat_exit;
    }

    read_size = fread((void*)p_pcm, 1, pcm_size, f_pcm); //读取音频文件内容
    if (read_size != pcm_size)
    {
        qDebug() << "6";
        goto iat_exit;
    }

    qDebug() << "1";
    session_id = QISRSessionBegin(NULL, session_begin_params, &errcode); //听写不需要语法，第一个参数为NULL
    if (MSP_SUCCESS != errcode)
    {
        qDebug()<<"\nQISRSessionBegin failed! error code:"<< errcode<<"\n";
        goto iat_exit;
    }

    while (1)
    {
        unsigned int len = 10 * FRAME_LEN; // 每次写入200ms音频(16k，16bit)：1帧音频20ms，10帧=200ms。16k采样率的16位音频，一帧的大小为640Byte
        int ret = 0;

        if (pcm_size < 2 * len)
            len = pcm_size;
        if (len <= 0)
            break;

        aud_stat = MSP_AUDIO_SAMPLE_CONTINUE;
        if (0 == pcm_count)
            aud_stat = MSP_AUDIO_SAMPLE_FIRST;

        printf(">");
        ret = QISRAudioWrite(session_id, (const void*)&p_pcm[pcm_count], len, aud_stat, &ep_stat, &rec_stat);
        if (MSP_SUCCESS != ret)
        {
            qDebug() << "\nQISRAudioWrite failed! error code:" << ret<<"\n";
            goto iat_exit;
        }

        pcm_count += (long)len;
        pcm_size -= (long)len;

        if (MSP_REC_STATUS_SUCCESS == rec_stat) //已经有部分听写结果
        {
            const char* rslt = QISRGetResult(session_id, &rec_stat, 0, &errcode);
            if (MSP_SUCCESS != errcode)
            {
                qDebug()<<"\nQISRGetResult failed! error code:"<<errcode<<"\n";
                goto iat_exit;
            }
            if (NULL != rslt)
            {
                unsigned int rslt_len = strlen(rslt);
                total_len += rslt_len;
                if (total_len >= BUFFER_SIZE)
                {
                    qDebug() << "\nno enough buffer for rec_result !\n";
                    goto iat_exit;
                }
                strncat(rec_result, rslt, rslt_len);
            }
        }

        if (MSP_EP_AFTER_SPEECH == ep_stat)
            break;
        Sleep(10); //模拟人说话时间间隙。200ms对应10帧的音频
    }
    errcode = QISRAudioWrite(session_id, NULL, 0, MSP_AUDIO_SAMPLE_LAST, &ep_stat, &rec_stat);
    if (MSP_SUCCESS != errcode)
    {
        qDebug() << "\nQISRAudioWrite failed! error code:" << errcode << "\n";
        goto iat_exit;
    }

    while (MSP_REC_STATUS_COMPLETE != rec_stat)
    {
        const char* rslt = QISRGetResult(session_id, &rec_stat, 0, &errcode);
        if (MSP_SUCCESS != errcode)
        {
            qDebug()<<"\nQISRGetResult failed, error code:"<< errcode<<"\n";
            goto iat_exit;
        }
        if (NULL != rslt)
        {
            unsigned int rslt_len = strlen(rslt);
            total_len += rslt_len;
            if (total_len >= BUFFER_SIZE)
            {
                qDebug() << "\nno enough buffer for rec_result !\n";
                goto iat_exit;
            }
            strncat(rec_result, rslt, rslt_len);
        }
        Sleep(150); //防止频繁占用CPU
    }
    qDebug() << "";
    qString_res = QString::fromLocal8Bit(rec_result);
    qDebug() << "\nend\n";
    qDebug() << "=============================================================\n";

    qDebug() << "\nrec_result:"<< qString_res <<"\n";
    qDebug() << "\nend\n";

iat_exit:
    if (NULL != f_pcm)
    {
        fclose(f_pcm);
        f_pcm = NULL;
    }
    if (NULL != p_pcm)
    {
        free(p_pcm);
        p_pcm = NULL;
    }
    qDebug() << "over";
    QISRSessionEnd(session_id, hints);
    // 返回识别结果
    return qString_res; // 替换为实际的返回值
}

int recognizer::tts(const char* src_text, QString des_path)
{
    int          ret = -1;
    FILE* fp = NULL;
    const char* sessionID = NULL;
    unsigned int audio_len = 0;
    wave_pcm_hdr wav_hdr = default_wav_hdr;
    int          synth_status = MSP_TTS_FLAG_STILL_HAVE_DATA;

    if (NULL == src_text || des_path.isEmpty())
    {
        qDebug("params is error!\n");
        return ret;
    }
    //将路径的字符编码集改为GB2312
    QTextCodec* code = QTextCodec::codecForName("GB2312");
    std::string path = code->fromUnicode(des_path).data();
    fp = fopen(path.c_str(), "wb");
    if (NULL == fp)
    {
        qDebug("open %s error.\n", path);
        return ret;
    }
    /* 开始合成 */
    sessionID = QTTSSessionBegin(session_begin_params2, &ret);
    if (MSP_SUCCESS != ret)
    {
        qDebug("QTTSSessionBegin failed, error code: %d.\n", ret);
        fclose(fp);
        return ret;
    }
    ret = QTTSTextPut(sessionID, src_text, (unsigned int)strlen(src_text), NULL);
    if (MSP_SUCCESS != ret)
    {
        qDebug("QTTSTextPut failed, error code: %d.\n", ret);
        QTTSSessionEnd(sessionID, "TextPutError");
        fclose(fp);
        return ret;
    }
    qDebug("creating ...\n");
    fwrite(&wav_hdr, sizeof(wav_hdr), 1, fp); //添加wav音频头，使用采样率为16000
    while (1)
    {
        /* 获取合成音频 */
        const void* data = QTTSAudioGet(sessionID, &audio_len, &synth_status, &ret);
        if (MSP_SUCCESS != ret)
            break;
        if (NULL != data)
        {
            fwrite(data, audio_len, 1, fp);
            wav_hdr.data_size += audio_len; //计算data_size大小
        }
        if (MSP_TTS_FLAG_DATA_END == synth_status)
            break;
    }
    qDebug("\n");
    if (MSP_SUCCESS != ret)
    {
        qDebug("QTTSAudioGet failed, error code: %d.\n", ret);
        QTTSSessionEnd(sessionID, "AudioGetError");
        fclose(fp);
        return ret;
    }
    /* 修正wav文件头数据的大小 */
    wav_hdr.size_8 += wav_hdr.data_size + (sizeof(wav_hdr) - 8);

    /* 将修正过的数据写回文件头部,音频文件为wav格式 */
    fseek(fp, 4, 0);
    fwrite(&wav_hdr.size_8, sizeof(wav_hdr.size_8), 1, fp); //写入size_8的值
    fseek(fp, 40, 0); //将文件指针偏移到存储data_size值的位置
    fwrite(&wav_hdr.data_size, sizeof(wav_hdr.data_size), 1, fp); //写入data_size的值
    fclose(fp);  //关闭文件
    fp = NULL;
    /* 合成完毕 */
    ret = QTTSSessionEnd(sessionID, "Normal");
    if (MSP_SUCCESS != ret)
    {
        qDebug("QTTSSessionEnd failed, error code: %d.\n", ret);
    }
    // 等待1秒钟（1000毫秒）
    //std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    return ret;
}

