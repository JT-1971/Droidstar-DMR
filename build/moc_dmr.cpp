/****************************************************************************
** Meta object code from reading C++ file 'dmr.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../dmr.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dmr.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DMR_t {
    uint offsetsAndSizes[42];
    char stringdata0[4];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[19];
    char stringdata5[9];
    char stringdata6[10];
    char stringdata7[16];
    char stringdata8[9];
    char stringdata9[16];
    char stringdata10[10];
    char stringdata11[2];
    char stringdata12[17];
    char stringdata13[3];
    char stringdata14[20];
    char stringdata15[2];
    char stringdata16[11];
    char stringdata17[3];
    char stringdata18[13];
    char stringdata19[2];
    char stringdata20[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DMR_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DMR_t qt_meta_stringdata_DMR = {
    {
        QT_MOC_LITERAL(0, 3),  // "DMR"
        QT_MOC_LITERAL(4, 11),  // "process_udp"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 15),  // "process_rx_data"
        QT_MOC_LITERAL(33, 18),  // "process_modem_data"
        QT_MOC_LITERAL(52, 8),  // "get_ambe"
        QT_MOC_LITERAL(61, 9),  // "send_ping"
        QT_MOC_LITERAL(71, 15),  // "send_disconnect"
        QT_MOC_LITERAL(87, 8),  // "transmit"
        QT_MOC_LITERAL(96, 15),  // "hostname_lookup"
        QT_MOC_LITERAL(112, 9),  // "QHostInfo"
        QT_MOC_LITERAL(122, 1),  // "i"
        QT_MOC_LITERAL(124, 16),  // "dmr_tgid_changed"
        QT_MOC_LITERAL(141, 2),  // "id"
        QT_MOC_LITERAL(144, 19),  // "dmrpc_state_changed"
        QT_MOC_LITERAL(164, 1),  // "p"
        QT_MOC_LITERAL(166, 10),  // "cc_changed"
        QT_MOC_LITERAL(177, 2),  // "cc"
        QT_MOC_LITERAL(180, 12),  // "slot_changed"
        QT_MOC_LITERAL(193, 1),  // "s"
        QT_MOC_LITERAL(195, 10)   // "send_frame"
    },
    "DMR",
    "process_udp",
    "",
    "process_rx_data",
    "process_modem_data",
    "get_ambe",
    "send_ping",
    "send_disconnect",
    "transmit",
    "hostname_lookup",
    "QHostInfo",
    "i",
    "dmr_tgid_changed",
    "id",
    "dmrpc_state_changed",
    "p",
    "cc_changed",
    "cc",
    "slot_changed",
    "s",
    "send_frame"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DMR[] = {

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
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    1,   94,    2, 0x08,    3 /* Private */,
       5,    0,   97,    2, 0x08,    5 /* Private */,
       6,    0,   98,    2, 0x08,    6 /* Private */,
       7,    0,   99,    2, 0x08,    7 /* Private */,
       8,    0,  100,    2, 0x08,    8 /* Private */,
       9,    1,  101,    2, 0x08,    9 /* Private */,
      12,    1,  104,    2, 0x08,   11 /* Private */,
      14,    1,  107,    2, 0x08,   13 /* Private */,
      16,    1,  110,    2, 0x08,   15 /* Private */,
      18,    1,  113,    2, 0x08,   17 /* Private */,
      20,    0,  116,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DMR::staticMetaObject = { {
    QMetaObject::SuperData::link<Mode::staticMetaObject>(),
    qt_meta_stringdata_DMR.offsetsAndSizes,
    qt_meta_data_DMR,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DMR_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DMR, std::true_type>,
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
        // method 'dmr_tgid_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'dmrpc_state_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cc_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slot_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'send_frame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DMR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DMR *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->process_udp(); break;
        case 1: _t->process_rx_data(); break;
        case 2: _t->process_modem_data((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 3: _t->get_ambe(); break;
        case 4: _t->send_ping(); break;
        case 5: _t->send_disconnect(); break;
        case 6: _t->transmit(); break;
        case 7: _t->hostname_lookup((*reinterpret_cast< std::add_pointer_t<QHostInfo>>(_a[1]))); break;
        case 8: _t->dmr_tgid_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->dmrpc_state_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->cc_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->slot_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->send_frame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHostInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject *DMR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DMR::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DMR.stringdata0))
        return static_cast<void*>(this);
    return Mode::qt_metacast(_clname);
}

int DMR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
