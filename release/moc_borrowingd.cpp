/****************************************************************************
** Meta object code from reading C++ file 'borrowingd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../borrowingd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'borrowingd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BorrowingD_t {
    QByteArrayData data[7];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BorrowingD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BorrowingD_t qt_meta_stringdata_BorrowingD = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BorrowingD"
QT_MOC_LITERAL(1, 11, 17), // "on_Cancel_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "on_Add_clicked"
QT_MOC_LITERAL(4, 45, 17), // "on_Delete_clicked"
QT_MOC_LITERAL(5, 63, 18), // "on_Proceed_clicked"
QT_MOC_LITERAL(6, 82, 22) // "updateStartAndEndTimes"

    },
    "BorrowingD\0on_Cancel_clicked\0\0"
    "on_Add_clicked\0on_Delete_clicked\0"
    "on_Proceed_clicked\0updateStartAndEndTimes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BorrowingD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BorrowingD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BorrowingD *_t = static_cast<BorrowingD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Cancel_clicked(); break;
        case 1: _t->on_Add_clicked(); break;
        case 2: _t->on_Delete_clicked(); break;
        case 3: _t->on_Proceed_clicked(); break;
        case 4: _t->updateStartAndEndTimes(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BorrowingD::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BorrowingD.data,
      qt_meta_data_BorrowingD,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BorrowingD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BorrowingD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BorrowingD.stringdata0))
        return static_cast<void*>(const_cast< BorrowingD*>(this));
    if (!strcmp(_clname, "CustomQtUI"))
        return static_cast< CustomQtUI*>(const_cast< BorrowingD*>(this));
    return QWidget::qt_metacast(_clname);
}

int BorrowingD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
