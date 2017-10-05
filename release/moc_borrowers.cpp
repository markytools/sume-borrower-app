/****************************************************************************
** Meta object code from reading C++ file 'borrowers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../borrowers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'borrowers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Borrowers_t {
    QByteArrayData data[19];
    char stringdata0[362];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Borrowers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Borrowers_t qt_meta_stringdata_Borrowers = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Borrowers"
QT_MOC_LITERAL(1, 10, 15), // "on_Back_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 22), // "on_leftToRight_clicked"
QT_MOC_LITERAL(4, 50, 22), // "on_rightToLeft_clicked"
QT_MOC_LITERAL(5, 73, 18), // "on_Proceed_clicked"
QT_MOC_LITERAL(6, 92, 25), // "on_searchEdit_textChanged"
QT_MOC_LITERAL(7, 118, 4), // "text"
QT_MOC_LITERAL(8, 123, 34), // "on_SubjectsTableWidget_cellCl..."
QT_MOC_LITERAL(9, 158, 3), // "row"
QT_MOC_LITERAL(10, 162, 6), // "column"
QT_MOC_LITERAL(11, 169, 41), // "on_SubjectsTableWidget_curren..."
QT_MOC_LITERAL(12, 211, 10), // "currentRow"
QT_MOC_LITERAL(13, 222, 13), // "currentColumn"
QT_MOC_LITERAL(14, 236, 11), // "previousRow"
QT_MOC_LITERAL(15, 248, 14), // "previousColumn"
QT_MOC_LITERAL(16, 263, 36), // "on_ExperimentTableWidget_cell..."
QT_MOC_LITERAL(17, 300, 43), // "on_ExperimentTableWidget_curr..."
QT_MOC_LITERAL(18, 344, 17) // "on_Back_2_clicked"

    },
    "Borrowers\0on_Back_clicked\0\0"
    "on_leftToRight_clicked\0on_rightToLeft_clicked\0"
    "on_Proceed_clicked\0on_searchEdit_textChanged\0"
    "text\0on_SubjectsTableWidget_cellClicked\0"
    "row\0column\0on_SubjectsTableWidget_currentCellChanged\0"
    "currentRow\0currentColumn\0previousRow\0"
    "previousColumn\0on_ExperimentTableWidget_cellClicked\0"
    "on_ExperimentTableWidget_currentCellChanged\0"
    "on_Back_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Borrowers[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       8,    2,   71,    2, 0x08 /* Private */,
      11,    4,   76,    2, 0x08 /* Private */,
      16,    2,   85,    2, 0x08 /* Private */,
      17,    4,   90,    2, 0x08 /* Private */,
      18,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,   15,
    QMetaType::Void,

       0        // eod
};

void Borrowers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Borrowers *_t = static_cast<Borrowers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Back_clicked(); break;
        case 1: _t->on_leftToRight_clicked(); break;
        case 2: _t->on_rightToLeft_clicked(); break;
        case 3: _t->on_Proceed_clicked(); break;
        case 4: _t->on_searchEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_SubjectsTableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_SubjectsTableWidget_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 7: _t->on_ExperimentTableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_ExperimentTableWidget_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 9: _t->on_Back_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Borrowers::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Borrowers.data,
      qt_meta_data_Borrowers,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Borrowers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Borrowers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Borrowers.stringdata0))
        return static_cast<void*>(const_cast< Borrowers*>(this));
    if (!strcmp(_clname, "CustomQtUI"))
        return static_cast< CustomQtUI*>(const_cast< Borrowers*>(this));
    return QWidget::qt_metacast(_clname);
}

int Borrowers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
