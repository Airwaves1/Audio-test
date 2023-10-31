/****************************************************************************
** Meta object code from reading C++ file 'framelessWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Audio/framelessWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'framelessWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_framelessWidget_t {
    QByteArrayData data[14];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_framelessWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_framelessWidget_t qt_meta_stringdata_framelessWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "framelessWidget"
QT_MOC_LITERAL(1, 16, 18), // "recognize_finished"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "spark_finished"
QT_MOC_LITERAL(4, 51, 29), // "on_iflytek_pushButton_clicked"
QT_MOC_LITERAL(5, 81, 26), // "on_song_pushButton_clicked"
QT_MOC_LITERAL(6, 108, 25), // "on_dir_pushButton_clicked"
QT_MOC_LITERAL(7, 134, 28), // "on_record_pushButton_pressed"
QT_MOC_LITERAL(8, 163, 29), // "on_record_pushButton_released"
QT_MOC_LITERAL(9, 193, 6), // "do_tts"
QT_MOC_LITERAL(10, 200, 13), // "talk_to_spark"
QT_MOC_LITERAL(11, 214, 17), // "onProcessFinished"
QT_MOC_LITERAL(12, 232, 5), // "input"
QT_MOC_LITERAL(13, 238, 6) // "output"

    },
    "framelessWidget\0recognize_finished\0\0"
    "spark_finished\0on_iflytek_pushButton_clicked\0"
    "on_song_pushButton_clicked\0"
    "on_dir_pushButton_clicked\0"
    "on_record_pushButton_pressed\0"
    "on_record_pushButton_released\0do_tts\0"
    "talk_to_spark\0onProcessFinished\0input\0"
    "output"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_framelessWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    2,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,

       0        // eod
};

void framelessWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<framelessWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recognize_finished(); break;
        case 1: _t->spark_finished(); break;
        case 2: _t->on_iflytek_pushButton_clicked(); break;
        case 3: _t->on_song_pushButton_clicked(); break;
        case 4: _t->on_dir_pushButton_clicked(); break;
        case 5: _t->on_record_pushButton_pressed(); break;
        case 6: _t->on_record_pushButton_released(); break;
        case 7: _t->do_tts(); break;
        case 8: _t->talk_to_spark(); break;
        case 9: _t->onProcessFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (framelessWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&framelessWidget::recognize_finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (framelessWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&framelessWidget::spark_finished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject framelessWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_framelessWidget.data,
    qt_meta_data_framelessWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *framelessWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *framelessWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_framelessWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int framelessWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void framelessWidget::recognize_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void framelessWidget::spark_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
