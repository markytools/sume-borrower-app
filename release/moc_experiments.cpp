/****************************************************************************
** Meta object code from reading C++ file 'experiments.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../experiments.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'experiments.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Experiments_t {
    QByteArrayData data[18];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Experiments_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Experiments_t qt_meta_stringdata_Experiments = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Experiments"
QT_MOC_LITERAL(1, 12, 15), // "on_Back_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "updateExperiments"
QT_MOC_LITERAL(4, 47, 24), // "on_addExperiment_clicked"
QT_MOC_LITERAL(5, 72, 27), // "on_deleteExperiment_clicked"
QT_MOC_LITERAL(6, 100, 31), // "on_experimentsTable_cellClicked"
QT_MOC_LITERAL(7, 132, 3), // "row"
QT_MOC_LITERAL(8, 136, 6), // "column"
QT_MOC_LITERAL(9, 143, 38), // "on_experimentsTable_currentCe..."
QT_MOC_LITERAL(10, 182, 10), // "currentRow"
QT_MOC_LITERAL(11, 193, 13), // "currentColumn"
QT_MOC_LITERAL(12, 207, 11), // "previousRow"
QT_MOC_LITERAL(13, 219, 14), // "previousColumn"
QT_MOC_LITERAL(14, 234, 22), // "on_leftToRight_clicked"
QT_MOC_LITERAL(15, 257, 22), // "on_rightToLeft_clicked"
QT_MOC_LITERAL(16, 280, 25), // "on_searchEdit_textChanged"
QT_MOC_LITERAL(17, 306, 4) // "text"

    },
    "Experiments\0on_Back_clicked\0\0"
    "updateExperiments\0on_addExperiment_clicked\0"
    "on_deleteExperiment_clicked\0"
    "on_experimentsTable_cellClicked\0row\0"
    "column\0on_experimentsTable_currentCellChanged\0"
    "currentRow\0currentColumn\0previousRow\0"
    "previousColumn\0on_leftToRight_clicked\0"
    "on_rightToLeft_clicked\0on_searchEdit_textChanged\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Experiments[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    2,   63,    2, 0x08 /* Private */,
       9,    4,   68,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,
      15,    0,   78,    2, 0x08 /* Private */,
      16,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void Experiments::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Experiments *_t = static_cast<Experiments *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Back_clicked(); break;
        case 1: _t->updateExperiments(); break;
        case 2: _t->on_addExperiment_clicked(); break;
        case 3: _t->on_deleteExperiment_clicked(); break;
        case 4: _t->on_experimentsTable_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_experimentsTable_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->on_leftToRight_clicked(); break;
        case 7: _t->on_rightToLeft_clicked(); break;
        case 8: _t->on_searchEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Experiments::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Experiments.data,
      qt_meta_data_Experiments,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Experiments::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Experiments::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Experiments.stringdata0))
        return static_cast<void*>(const_cast< Experiments*>(this));
    if (!strcmp(_clname, "CustomQtUI"))
        return static_cast< CustomQtUI*>(const_cast< Experiments*>(this));
    return QWidget::qt_metacast(_clname);
}

int Experiments::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
