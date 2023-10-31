import SparkApi
import sys

# 设置标准输入和输出的编码为UTF-8
sys.stdin.reconfigure(encoding='utf-8')
sys.stdout.reconfigure(encoding='utf-8')
#以下密钥信息从控制台获取
appid = "1681e85f"     #填写控制台中获取的 APPID 信息
api_secret = "ODhjZjk5ZTk4Zjg2YzEzNmQ2YjJjZTgw"   #填写控制台中获取的 APISecret 信息
api_key ="412f51e6b162210f2b5b61bbf4579529"    #填写控制台中获取的 APIKey 信息

#用于配置大模型版本，默认“general/generalv2”
#domain = "general"   # v1.5版本
domain = "generalv2"    # v2.0版本
#云端环境的服务地址
#Spark_url = "ws://spark-api.xf-yun.com/v1.1/chat"  # v1.5环境的地址
Spark_url = "ws://spark-api.xf-yun.com/v2.1/chat"  # v2.0环境的地址


text =[]

# length = 0

def getText(role,content):
    jsoncon = {}
    jsoncon["role"] = role
    jsoncon["content"] = content
    text.append(jsoncon)
    return text

def getlength(text):
    length = 0
    for content in text:
        temp = content["content"]
        leng = len(temp)
        length += leng
    return length

def checklen(text):
    while (getlength(text) > 8000):
        del text[0]
    return text
    


if __name__ == '__main__':
    text.clear()
    
    while True:

        Input = input().strip()
        #Input = Input.encode('utf-8')

        question = checklen(getText("user", Input))
        SparkApi.answer = ""
        
        # 调用星火API获取答案
        print("", end="")  # 这行代码将输出到标准输出，会被C++程序捕获
        SparkApi.main(appid, api_key, api_secret, Spark_url, domain, question)
        
        # 将答案添加到text列表中，准备发送回C++程序
        getText("assistant", SparkApi.answer.encode('utf-8'))

        



