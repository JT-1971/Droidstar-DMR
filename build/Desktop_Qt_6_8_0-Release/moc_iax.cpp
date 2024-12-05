/****************************************************************************
** Meta object code from reading C++ file 'iax.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../iax.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iax.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSIAXENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSIAXENDCLASS = QtMocHelpers::stringData(
    "IAX",
    "deleteLater",
    "",
    "process_udp",
    "send_connect",
    "send_disconnect",
    "hostname_lookup",
    "QHostInfo",
    "i",
    "send_registration",
    "uint16_t",
    "dcall",
    "send_call",
    "send_call_auth",
    "send_ack",
    "uint8_t",
    "send_lag_response",
    "send_ping",
    "send_pong",
    "toggle_tx",
    "start_tx",
    "stop_tx",
    "transmit",
    "process_rx_data",
    "send_voice_frame",
    "int16_t*",
    "send_dtmf",
    "send_radio_key",
    "in_audio_vol_changed",
    "v",
    "out_audio_vol_changed"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSIAXENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  152,    2, 0x08,    1 /* Private */,
       3,    0,  153,    2, 0x08,    2 /* Private */,
       4,    0,  154,    2, 0x08,    3 /* Private */,
       5,    0,  155,    2, 0x08,    4 /* Private */,
       6,    1,  156,    2, 0x08,    5 /* Private */,
       9,    1,  159,    2, 0x08,    7 /* Private */,
       9,    0,  162,    2, 0x28,    9 /* Private | MethodCloned */,
      12,    0,  163,    2, 0x08,   10 /* Private */,
      13,    0,  164,    2, 0x08,   11 /* Private */,
      14,    4,  165,    2, 0x08,   12 /* Private */,
      16,    0,  174,    2, 0x08,   17 /* Private */,
      17,    0,  175,    2, 0x08,   18 /* Private */,
      18,    0,  176,    2, 0x08,   19 /* Private */,
      19,    1,  177,    2, 0x08,   20 /* Private */,
      20,    0,  180,    2, 0x08,   22 /* Private */,
      21,    0,  181,    2, 0x08,   23 /* Private */,
      22,    0,  182,    2, 0x08,   24 /* Private */,
      23,    0,  183,    2, 0x08,   25 /* Private */,
      24,    1,  184,    2, 0x08,   26 /* Private */,
      26,    1,  187,    2, 0x08,   28 /* Private */,
      27,    1,  190,    2, 0x08,   30 /* Private */,
      28,    1,  193,    2, 0x08,   32 /* Private */,
      30,    1,  196,    2, 0x08,   34 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 15, 0x80000000 | 15,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QReal,   29,
    QMetaType::Void, QMetaType::QReal,   29,

       0        // eod
};

Q_CONSTINIT const QMetaObject IAX::staticMetaObject = { {
    QMetaObject::SuperData::link<Mode::staticMetaObject>(),
    qt_meta_stringdata_CLASSIAXENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSIAXENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSIAXENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IAX, std::true_type>,
        // method 'deleteLater'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_udp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_connect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_disconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hostname_lookup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHostInfo, std::false_type>,
        // method 'send_registration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'send_registration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_call'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_call_auth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_ack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'send_lag_response'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_ping'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_pong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggle_tx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'start_tx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop_tx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transmit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_rx_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_voice_frame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int16_t *, std::false_type>,
        // method 'send_dtmf'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'send_radio_key'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'in_audio_vol_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'out_audio_vol_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>
    >,
    nullptr
} };

void IAX::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IAX *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deleteLater(); break;
        case 1: _t->process_udp(); break;
        case 2: _t->send_connect(); break;
        case 3: _t->send_disconnect(); break;
        case 4: _t->hostname_lookup((*reinterpret_cast< std::add_pointer_t<QHostInfo>>(_a[1]))); break;
        case 5: _t->send_registration((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 6: _t->send_registration(); break;
        case 7: _t->send_call(); break;
        case 8: _t->send_call_auth(); break;
        case 9: _t->send_ack((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[4]))); break;
        case 10: _t->send_lag_response(); break;
        case 11: _t->send_ping(); break;
        case 12: _t->send_pong(); break;
        case 13: _t->toggle_tx((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->start_tx(); break;
        case 15: _t->stop_tx(); break;
        case 16: _t->transmit(); break;
        case 17: _t->process_rx_data(); break;
        case 18: _t->send_voice_frame((*reinterpret_cast< std::add_pointer_t<int16_t*>>(_a[1]))); break;
        case 19: _t->send_dtmf((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 20: _t->send_radio_key((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->in_audio_vol_changed((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 22: _t->out_audio_vol_changed((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHostInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject *IAX::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IAX::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSIAXENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Mode::qt_metacast(_clname);
}

int IAX::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Mode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
