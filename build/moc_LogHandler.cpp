/****************************************************************************
** Meta object code from reading C++ file 'LogHandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../LogHandler.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogHandler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_LogHandler_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[8];
    char stringdata5[8];
    char stringdata6[9];
    char stringdata7[15];
    char stringdata8[13];
    char stringdata9[16];
    char stringdata10[5];
    char stringdata11[16];
    char stringdata12[10];
    char stringdata13[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LogHandler_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LogHandler_t qt_meta_stringdata_LogHandler = {
    {
        QT_MOC_LITERAL(0, 10),  // "LogHandler"
        QT_MOC_LITERAL(11, 7),  // "saveLog"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 8),  // "fileName"
        QT_MOC_LITERAL(29, 7),  // "logData"
        QT_MOC_LITERAL(37, 7),  // "loadLog"
        QT_MOC_LITERAL(45, 8),  // "clearLog"
        QT_MOC_LITERAL(54, 14),  // "exportLogToCsv"
        QT_MOC_LITERAL(69, 12),  // "getDSLogPath"
        QT_MOC_LITERAL(82, 15),  // "getFriendlyPath"
        QT_MOC_LITERAL(98, 4),  // "path"
        QT_MOC_LITERAL(103, 15),  // "exportLogToAdif"
        QT_MOC_LITERAL(119, 9),  // "shareFile"
        QT_MOC_LITERAL(129, 8)   // "filePath"
    },
    "LogHandler",
    "saveLog",
    "",
    "fileName",
    "logData",
    "loadLog",
    "clearLog",
    "exportLogToCsv",
    "getDSLogPath",
    "getFriendlyPath",
    "path",
    "exportLogToAdif",
    "shareFile",
    "filePath"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LogHandler[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x02,    1 /* Public */,
       5,    1,   67,    2, 0x02,    4 /* Public */,
       6,    1,   70,    2, 0x02,    6 /* Public */,
       7,    2,   73,    2, 0x02,    8 /* Public */,
       8,    0,   78,    2, 0x102,   11 /* Public | MethodIsConst  */,
       9,    1,   79,    2, 0x102,   12 /* Public | MethodIsConst  */,
      11,    2,   82,    2, 0x02,   14 /* Public */,
      12,    1,   87,    2, 0x02,   17 /* Public */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QJsonArray,    3,    4,
    QMetaType::QJsonArray, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString, QMetaType::QJsonArray,    3,    4,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   10,
    QMetaType::Bool, QMetaType::QString, QMetaType::QJsonArray,    3,    4,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject LogHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LogHandler.offsetsAndSizes,
    qt_meta_data_LogHandler,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LogHandler_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LogHandler, std::true_type>,
        // method 'saveLog'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>,
        // method 'loadLog'
        QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'clearLog'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'exportLogToCsv'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>,
        // method 'getDSLogPath'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getFriendlyPath'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'exportLogToAdif'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>,
        // method 'shareFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void LogHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->saveLog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { QJsonArray _r = _t->loadLog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->clearLog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->exportLogToCsv((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->getDSLogPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->getFriendlyPath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->exportLogToAdif((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->shareFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *LogHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LogHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
