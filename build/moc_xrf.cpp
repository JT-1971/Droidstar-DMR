/****************************************************************************
** Meta object code from reading C++ file 'xrf.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../xrf.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xrf.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_XRF_t {
    uint offsetsAndSizes[42];
    char stringdata0[4];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[16];
    char stringdata5[9];
    char stringdata6[12];
    char stringdata7[16];
    char stringdata8[19];
    char stringdata9[2];
    char stringdata10[9];
    char stringdata11[10];
    char stringdata12[16];
    char stringdata13[9];
    char stringdata14[16];
    char stringdata15[10];
    char stringdata16[2];
    char stringdata17[15];
    char stringdata18[2];
    char stringdata19[11];
    char stringdata20[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_XRF_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_XRF_t qt_meta_stringdata_XRF = {
    {
        QT_MOC_LITERAL(0, 3),  // "XRF"
        QT_MOC_LITERAL(4, 9),  // "toggle_tx"
        QT_MOC_LITERAL(14, 0),  // ""
        QT_MOC_LITERAL(15, 8),  // "start_tx"
        QT_MOC_LITERAL(24, 15),  // "format_callsign"
        QT_MOC_LITERAL(40, 8),  // "QString&"
        QT_MOC_LITERAL(49, 11),  // "process_udp"
        QT_MOC_LITERAL(61, 15),  // "process_rx_data"
        QT_MOC_LITERAL(77, 18),  // "process_modem_data"
        QT_MOC_LITERAL(96, 1),  // "d"
        QT_MOC_LITERAL(98, 8),  // "get_ambe"
        QT_MOC_LITERAL(107, 9),  // "send_ping"
        QT_MOC_LITERAL(117, 15),  // "send_disconnect"
        QT_MOC_LITERAL(133, 8),  // "transmit"
        QT_MOC_LITERAL(142, 15),  // "hostname_lookup"
        QT_MOC_LITERAL(158, 9),  // "QHostInfo"
        QT_MOC_LITERAL(168, 1),  // "i"
        QT_MOC_LITERAL(170, 14),  // "usrtxt_changed"
        QT_MOC_LITERAL(185, 1),  // "t"
        QT_MOC_LITERAL(187, 10),  // "send_frame"
        QT_MOC_LITERAL(198, 8)   // "uint8_t*"
    },
    "XRF",
    "toggle_tx",
    "",
    "start_tx",
    "format_callsign",
    "QString&",
    "process_udp",
    "process_rx_data",
    "process_modem_data",
    "d",
    "get_ambe",
    "send_ping",
    "send_disconnect",
    "transmit",
    "hostname_lookup",
    "QHostInfo",
    "i",
    "usrtxt_changed",
    "t",
    "send_frame",
    "uint8_t*"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_XRF[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x08,    1 /* Private */,
       3,    0,   95,    2, 0x08,    3 /* Private */,
       4,    1,   96,    2, 0x08,    4 /* Private */,
       6,    0,   99,    2, 0x08,    6 /* Private */,
       7,    0,  100,    2, 0x08,    7 /* Private */,
       8,    1,  101,    2, 0x08,    8 /* Private */,
      10,    0,  104,    2, 0x08,   10 /* Private */,
      11,    0,  105,    2, 0x08,   11 /* Private */,
      12,    0,  106,    2, 0x08,   12 /* Private */,
      13,    0,  107,    2, 0x08,   13 /* Private */,
      14,    1,  108,    2, 0x08,   14 /* Private */,
      17,    1,  111,    2, 0x08,   16 /* Private */,
      19,    1,  114,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 20,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject XRF::staticMetaObject = { {
    QMetaObject::SuperData::link<Mode::staticMetaObject>(),
    qt_meta_stringdata_XRF.offsetsAndSizes,
    qt_meta_data_XRF,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_XRF_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<XRF, std::true_type>,
        // method 'toggle_tx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'start_tx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'format_callsign'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'process_udp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_rx_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_modem_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'get_ambe'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_ping'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_disconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transmit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hostname_lookup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHostInfo, std::false_type>,
        // method 'usrtxt_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'send_frame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t *, std::false_type>
    >,
    nullptr
} };

void XRF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XRF *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggle_tx((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->start_tx(); break;
        case 2: _t->format_callsign((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 3: _t->process_udp(); break;
        case 4: _t->process_rx_data(); break;
        case 5: _t->process_modem_data((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 6: _t->get_ambe(); break;
        case 7: _t->send_ping(); break;
        case 8: _t->send_disconnect(); break;
        case 9: _t->transmit(); break;
        case 10: _t->hostname_lookup((*reinterpret_cast< std::add_pointer_t<QHostInfo>>(_a[1]))); break;
        case 11: _t->usrtxt_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->send_frame((*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHostInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject *XRF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XRF::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XRF.stringdata0))
        return static_cast<void*>(this);
    return Mode::qt_metacast(_clname);
}

int XRF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Mode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
