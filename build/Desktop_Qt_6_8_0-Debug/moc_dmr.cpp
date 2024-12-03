/****************************************************************************
** Meta object code from reading C++ file 'dmr.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dmr.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dmr.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDMRENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDMRENDCLASS = QtMocHelpers::stringData(
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
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDMRENDCLASS[] = {

 // content:
      12,       // revision
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
    qt_meta_stringdata_CLASSDMRENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDMRENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDMRENDCLASS_t,
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
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDMRENDCLASS.stringdata0))
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
