/****************************************************************************
** Meta object code from reading C++ file 'mode.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mode.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mode.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSModeENDCLASS = QtMocHelpers::stringData(
    "Mode",
    "update",
    "",
    "Mode::MODEINFO",
    "update_log",
    "update_output_level",
    "send_disconnect",
    "hostname_lookup",
    "QHostInfo",
    "mmdvm_direct_connect",
    "ambe_connect_status",
    "mmdvm_connect_status",
    "begin_connect",
    "input_src_changed",
    "id",
    "t",
    "start_tx",
    "stop_tx",
    "toggle_tx",
    "deleteLater",
    "in_audio_vol_changed",
    "out_audio_vol_changed",
    "load_vocoder_plugin",
    "swrx_state_changed",
    "s",
    "swtx_state_changed",
    "agc_state_changed",
    "mycall_changed",
    "mc",
    "urcall_changed",
    "uc",
    "rptr1_changed",
    "r1",
    "rptr2_changed",
    "r2",
    "usrtxt_changed",
    "module_changed",
    "m",
    "dst_changed",
    "dst",
    "host_lookup",
    "debug_changed",
    "debug"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  188,    2, 0x06,    1 /* Public */,
       4,    1,  191,    2, 0x06,    3 /* Public */,
       5,    1,  194,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  197,    2, 0x09,    7 /* Protected */,
       7,    1,  198,    2, 0x09,    8 /* Protected */,
       9,    0,  201,    2, 0x09,   10 /* Protected */,
      10,    1,  202,    2, 0x09,   11 /* Protected */,
      11,    1,  205,    2, 0x09,   13 /* Protected */,
      12,    0,  208,    2, 0x09,   15 /* Protected */,
      13,    2,  209,    2, 0x09,   16 /* Protected */,
      16,    0,  214,    2, 0x09,   19 /* Protected */,
      17,    0,  215,    2, 0x09,   20 /* Protected */,
      18,    1,  216,    2, 0x09,   21 /* Protected */,
      19,    0,  219,    2, 0x09,   23 /* Protected */,
      20,    1,  220,    2, 0x09,   24 /* Protected */,
      21,    1,  223,    2, 0x09,   26 /* Protected */,
      22,    0,  226,    2, 0x09,   28 /* Protected */,
      23,    1,  227,    2, 0x09,   29 /* Protected */,
      25,    1,  230,    2, 0x09,   31 /* Protected */,
      26,    1,  233,    2, 0x09,   33 /* Protected */,
      27,    1,  236,    2, 0x09,   35 /* Protected */,
      29,    1,  239,    2, 0x09,   37 /* Protected */,
      31,    1,  242,    2, 0x09,   39 /* Protected */,
      33,    1,  245,    2, 0x09,   41 /* Protected */,
      35,    1,  248,    2, 0x09,   43 /* Protected */,
      36,    1,  251,    2, 0x09,   45 /* Protected */,
      38,    1,  254,    2, 0x09,   47 /* Protected */,
      40,    0,  257,    2, 0x09,   49 /* Protected */,
      41,    1,  258,    2, 0x09,   50 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::UShort,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Char,   37,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   42,

       0        // eod
};

Q_CONSTINIT const QMetaObject Mode::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSModeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Mode, std::true_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mode::MODEINFO, std::false_type>,
        // method 'update_log'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'update_output_level'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned short, std::false_type>,
        // method 'send_disconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hostname_lookup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHostInfo, std::false_type>,
        // method 'mmdvm_direct_connect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ambe_connect_status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'mmdvm_connect_status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'begin_connect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'input_src_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'start_tx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop_tx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggle_tx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'deleteLater'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'in_audio_vol_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'out_audio_vol_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'load_vocoder_plugin'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'swrx_state_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'swtx_state_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'agc_state_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mycall_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'urcall_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'rptr1_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'rptr2_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'usrtxt_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'module_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<char, std::false_type>,
        // method 'dst_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'host_lookup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'debug_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Mode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mode *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< std::add_pointer_t<Mode::MODEINFO>>(_a[1]))); break;
        case 1: _t->update_log((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->update_output_level((*reinterpret_cast< std::add_pointer_t<ushort>>(_a[1]))); break;
        case 3: _t->send_disconnect(); break;
        case 4: _t->hostname_lookup((*reinterpret_cast< std::add_pointer_t<QHostInfo>>(_a[1]))); break;
        case 5: _t->mmdvm_direct_connect(); break;
        case 6: _t->ambe_connect_status((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->mmdvm_connect_status((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->begin_connect(); break;
        case 9: _t->input_src_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->start_tx(); break;
        case 11: _t->stop_tx(); break;
        case 12: _t->toggle_tx((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->deleteLater(); break;
        case 14: _t->in_audio_vol_changed((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 15: _t->out_audio_vol_changed((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 16: { bool _r = _t->load_vocoder_plugin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->swrx_state_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->swtx_state_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->agc_state_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->mycall_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->urcall_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->rptr1_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->rptr2_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->usrtxt_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->module_changed((*reinterpret_cast< std::add_pointer_t<char>>(_a[1]))); break;
        case 26: _t->dst_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->host_lookup(); break;
        case 28: _t->debug_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
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
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Mode::*)(Mode::MODEINFO );
            if (_t _q_method = &Mode::update; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Mode::*)(QString );
            if (_t _q_method = &Mode::update_log; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Mode::*)(unsigned short );
            if (_t _q_method = &Mode::update_output_level; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Mode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void Mode::update(Mode::MODEINFO _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Mode::update_log(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Mode::update_output_level(unsigned short _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
