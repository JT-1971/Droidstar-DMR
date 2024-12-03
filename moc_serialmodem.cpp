/****************************************************************************
** Meta object code from reading C++ file 'serialmodem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "serialmodem.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialmodem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SerialModem_t {
    uint offsetsAndSizes[28];
    char stringdata0[12];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[10];
    char stringdata5[12];
    char stringdata6[15];
    char stringdata7[15];
    char stringdata8[13];
    char stringdata9[14];
    char stringdata10[9];
    char stringdata11[11];
    char stringdata12[9];
    char stringdata13[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SerialModem_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SerialModem_t qt_meta_stringdata_SerialModem = {
    {
        QT_MOC_LITERAL(0, 11),  // "SerialModem"
        QT_MOC_LITERAL(12, 10),  // "data_ready"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 16),  // "modem_data_ready"
        QT_MOC_LITERAL(41, 9),  // "connected"
        QT_MOC_LITERAL(51, 11),  // "modem_ready"
        QT_MOC_LITERAL(63, 14),  // "process_serial"
        QT_MOC_LITERAL(78, 14),  // "receive_serial"
        QT_MOC_LITERAL(93, 12),  // "config_modem"
        QT_MOC_LITERAL(106, 13),  // "process_modem"
        QT_MOC_LITERAL(120, 8),  // "set_freq"
        QT_MOC_LITERAL(129, 10),  // "set_config"
        QT_MOC_LITERAL(140, 8),  // "set_mode"
        QT_MOC_LITERAL(149, 7)   // "uint8_t"
    },
    "SerialModem",
    "data_ready",
    "",
    "modem_data_ready",
    "connected",
    "modem_ready",
    "process_serial",
    "receive_serial",
    "config_modem",
    "process_modem",
    "set_freq",
    "set_config",
    "set_mode",
    "uint8_t"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SerialModem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    1,   81,    2, 0x06,    2 /* Public */,
       4,    1,   84,    2, 0x06,    4 /* Public */,
       5,    0,   87,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   88,    2, 0x08,    7 /* Private */,
       7,    1,   89,    2, 0x08,    8 /* Private */,
       8,    0,   92,    2, 0x08,   10 /* Private */,
       9,    0,   93,    2, 0x08,   11 /* Private */,
      10,    0,   94,    2, 0x08,   12 /* Private */,
      11,    0,   95,    2, 0x08,   13 /* Private */,
      12,    1,   96,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject SerialModem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SerialModem.offsetsAndSizes,
    qt_meta_data_SerialModem,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SerialModem_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SerialModem, std::true_type>,
        // method 'data_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modem_data_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'modem_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_serial'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receive_serial'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'config_modem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_modem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_freq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_config'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_mode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>
    >,
    nullptr
} };

void SerialModem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialModem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->data_ready(); break;
        case 1: _t->modem_data_ready((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 2: _t->connected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->modem_ready(); break;
        case 4: _t->process_serial(); break;
        case 5: _t->receive_serial((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 6: _t->config_modem(); break;
        case 7: _t->process_modem(); break;
        case 8: _t->set_freq(); break;
        case 9: _t->set_config(); break;
        case 10: _t->set_mode((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialModem::*)();
            if (_t _q_method = &SerialModem::data_ready; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialModem::*)(QByteArray );
            if (_t _q_method = &SerialModem::modem_data_ready; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialModem::*)(bool );
            if (_t _q_method = &SerialModem::connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialModem::*)();
            if (_t _q_method = &SerialModem::modem_ready; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *SerialModem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialModem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialModem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SerialModem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SerialModem::data_ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SerialModem::modem_data_ready(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SerialModem::connected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SerialModem::modem_ready()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
