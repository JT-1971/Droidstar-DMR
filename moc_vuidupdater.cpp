/****************************************************************************
** Meta object code from reading C++ file 'vuidupdater.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "vuidupdater.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vuidupdater.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_VUIDUpdater_t {
    uint offsetsAndSizes[30];
    char stringdata0[12];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[22];
    char stringdata5[8];
    char stringdata6[15];
    char stringdata7[15];
    char stringdata8[6];
    char stringdata9[22];
    char stringdata10[6];
    char stringdata11[17];
    char stringdata12[15];
    char stringdata13[20];
    char stringdata14[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_VUIDUpdater_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_VUIDUpdater_t qt_meta_stringdata_VUIDUpdater = {
    {
        QT_MOC_LITERAL(0, 11),  // "VUIDUpdater"
        QT_MOC_LITERAL(12, 23),  // "fetchedFirstNameChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 9),  // "firstName"
        QT_MOC_LITERAL(47, 21),  // "fetchedCountryChanged"
        QT_MOC_LITERAL(69, 7),  // "country"
        QT_MOC_LITERAL(77, 14),  // "onNetworkReply"
        QT_MOC_LITERAL(92, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(107, 5),  // "reply"
        QT_MOC_LITERAL(113, 21),  // "fetchFirstNameFromAPI"
        QT_MOC_LITERAL(135, 5),  // "data1"
        QT_MOC_LITERAL(141, 16),  // "fetchedFirstName"
        QT_MOC_LITERAL(158, 14),  // "fetchedCountry"
        QT_MOC_LITERAL(173, 19),  // "setFetchedFirstName"
        QT_MOC_LITERAL(193, 17)   // "setFetchedCountry"
    },
    "VUIDUpdater",
    "fetchedFirstNameChanged",
    "",
    "firstName",
    "fetchedCountryChanged",
    "country",
    "onNetworkReply",
    "QNetworkReply*",
    "reply",
    "fetchFirstNameFromAPI",
    "data1",
    "fetchedFirstName",
    "fetchedCountry",
    "setFetchedFirstName",
    "setFetchedCountry"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_VUIDUpdater[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    3 /* Public */,
       4,    1,   65,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   68,    2, 0x08,    7 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   71,    2, 0x02,    9 /* Public */,
      11,    0,   74,    2, 0x102,   11 /* Public | MethodIsConst  */,
      12,    0,   75,    2, 0x102,   12 /* Public | MethodIsConst  */,
      13,    1,   76,    2, 0x02,   13 /* Public */,
      14,    1,   79,    2, 0x02,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

 // methods: parameters
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00015103, uint(0), 0,
      12, QMetaType::QString, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VUIDUpdater::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VUIDUpdater.offsetsAndSizes,
    qt_meta_data_VUIDUpdater,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_VUIDUpdater_t,
        // property 'fetchedFirstName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fetchedCountry'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VUIDUpdater, std::true_type>,
        // method 'fetchedFirstNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'fetchedCountryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onNetworkReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'fetchFirstNameFromAPI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'fetchedFirstName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'fetchedCountry'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setFetchedFirstName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setFetchedCountry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void VUIDUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VUIDUpdater *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fetchedFirstNameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->fetchedCountryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onNetworkReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 3: _t->fetchFirstNameFromAPI((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 4: { QString _r = _t->fetchedFirstName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->fetchedCountry();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setFetchedFirstName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->setFetchedCountry((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VUIDUpdater::*)(const QString & );
            if (_t _q_method = &VUIDUpdater::fetchedFirstNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VUIDUpdater::*)(const QString & );
            if (_t _q_method = &VUIDUpdater::fetchedCountryChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VUIDUpdater *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fetchedFirstName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->fetchedCountry(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VUIDUpdater *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFetchedFirstName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFetchedCountry(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *VUIDUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VUIDUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VUIDUpdater.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VUIDUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void VUIDUpdater::fetchedFirstNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VUIDUpdater::fetchedCountryChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
