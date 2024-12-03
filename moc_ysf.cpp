/****************************************************************************
** Meta object code from reading C++ file 'ysf.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ysf.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ysf.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_YSF_t {
    uint offsetsAndSizes[30];
    char stringdata0[4];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[9];
    char stringdata5[10];
    char stringdata6[16];
    char stringdata7[9];
    char stringdata8[16];
    char stringdata9[10];
    char stringdata10[2];
    char stringdata11[11];
    char stringdata12[13];
    char stringdata13[2];
    char stringdata14[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_YSF_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_YSF_t qt_meta_stringdata_YSF = {
    {
        QT_MOC_LITERAL(0, 3),  // "YSF"
        QT_MOC_LITERAL(4, 11),  // "process_udp"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 15),  // "process_rx_data"
        QT_MOC_LITERAL(33, 8),  // "get_ambe"
        QT_MOC_LITERAL(42, 9),  // "send_ping"
        QT_MOC_LITERAL(52, 15),  // "send_disconnect"
        QT_MOC_LITERAL(68, 8),  // "transmit"
        QT_MOC_LITERAL(77, 15),  // "hostname_lookup"
        QT_MOC_LITERAL(93, 9),  // "QHostInfo"
        QT_MOC_LITERAL(103, 1),  // "i"
        QT_MOC_LITERAL(105, 10),  // "send_frame"
        QT_MOC_LITERAL(116, 12),  // "rate_changed"
        QT_MOC_LITERAL(129, 1),  // "r"
        QT_MOC_LITERAL(131, 18)   // "process_modem_data"
    },
    "YSF",
    "process_udp",
    "",
    "process_rx_data",
    "get_ambe",
    "send_ping",
    "send_disconnect",
    "transmit",
    "hostname_lookup",
    "QHostInfo",
    "i",
    "send_frame",
    "rate_changed",
    "r",
    "process_modem_data"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_YSF[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    0,   79,    2, 0x08,    6 /* Private */,
       8,    1,   80,    2, 0x08,    7 /* Private */,
      11,    0,   83,    2, 0x08,    9 /* Private */,
      12,    1,   84,    2, 0x08,   10 /* Private */,
      14,    1,   87,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QByteArray,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject YSF::staticMetaObject = { {
    QMetaObject::SuperData::link<Mode::staticMetaObject>(),
    qt_meta_stringdata_YSF.offsetsAndSizes,
    qt_meta_data_YSF,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_YSF_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<YSF, std::true_type>,
        // method 'process_udp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_rx_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'send_frame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rate_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'process_modem_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>
    >,
    nullptr
} };

void YSF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<YSF *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->process_udp(); break;
        case 1: _t->process_rx_data(); break;
        case 2: _t->get_ambe(); break;
        case 3: _t->send_ping(); break;
        case 4: _t->send_disconnect(); break;
        case 5: _t->transmit(); break;
        case 6: _t->hostname_lookup((*reinterpret_cast< std::add_pointer_t<QHostInfo>>(_a[1]))); break;
        case 7: _t->send_frame(); break;
        case 8: _t->rate_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->process_modem_data((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHostInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject *YSF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YSF::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_YSF.stringdata0))
        return static_cast<void*>(this);
    return Mode::qt_metacast(_clname);
}

int YSF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Mode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
