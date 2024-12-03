/****************************************************************************
** Meta object code from reading C++ file 'audioengine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "audioengine.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audioengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_AudioEngine_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[14];
    char stringdata5[9];
    char stringdata6[4];
    char stringdata7[7];
    char stringdata8[2];
    char stringdata9[19];
    char stringdata10[14];
    char stringdata11[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AudioEngine_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AudioEngine_t qt_meta_stringdata_AudioEngine = {
    {
        QT_MOC_LITERAL(0, 11),  // "AudioEngine"
        QT_MOC_LITERAL(12, 20),  // "onAudioOutputChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 19),  // "input_data_received"
        QT_MOC_LITERAL(54, 13),  // "process_audio"
        QT_MOC_LITERAL(68, 8),  // "int16_t*"
        QT_MOC_LITERAL(77, 3),  // "pcm"
        QT_MOC_LITERAL(81, 6),  // "size_t"
        QT_MOC_LITERAL(88, 1),  // "s"
        QT_MOC_LITERAL(90, 18),  // "handleStateChanged"
        QT_MOC_LITERAL(109, 13),  // "QAudio::State"
        QT_MOC_LITERAL(123, 8)   // "newState"
    },
    "AudioEngine",
    "onAudioOutputChanged",
    "",
    "input_data_received",
    "process_audio",
    "int16_t*",
    "pcm",
    "size_t",
    "s",
    "handleStateChanged",
    "QAudio::State",
    "newState"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AudioEngine[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    2,   40,    2, 0x08,    3 /* Private */,
       9,    1,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject AudioEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AudioEngine.offsetsAndSizes,
    qt_meta_data_AudioEngine,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AudioEngine_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AudioEngine, std::true_type>,
        // method 'onAudioOutputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'input_data_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_audio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int16_t *, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'handleStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudio::State, std::false_type>
    >,
    nullptr
} };

void AudioEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAudioOutputChanged(); break;
        case 1: _t->input_data_received(); break;
        case 2: _t->process_audio((*reinterpret_cast< std::add_pointer_t<int16_t*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<size_t>>(_a[2]))); break;
        case 3: _t->handleStateChanged((*reinterpret_cast< std::add_pointer_t<QAudio::State>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *AudioEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
