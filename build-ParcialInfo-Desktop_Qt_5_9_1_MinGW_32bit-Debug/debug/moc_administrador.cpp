/****************************************************************************
** Meta object code from reading C++ file 'administrador.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ParcialInfo/administrador.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'administrador.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_administrador_t {
    QByteArrayData data[8];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_administrador_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_administrador_t qt_meta_stringdata_administrador = {
    {
QT_MOC_LITERAL(0, 0, 13), // "administrador"
QT_MOC_LITERAL(1, 14, 18), // "on_agregar_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 23), // "on_estadisticas_clicked"
QT_MOC_LITERAL(4, 58, 17), // "on_combos_clicked"
QT_MOC_LITERAL(5, 76, 15), // "on_back_clicked"
QT_MOC_LITERAL(6, 92, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 116, 21) // "on_inventario_clicked"

    },
    "administrador\0on_agregar_clicked\0\0"
    "on_estadisticas_clicked\0on_combos_clicked\0"
    "on_back_clicked\0on_pushButton_2_clicked\0"
    "on_inventario_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_administrador[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void administrador::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        administrador *_t = static_cast<administrador *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_agregar_clicked(); break;
        case 1: _t->on_estadisticas_clicked(); break;
        case 2: _t->on_combos_clicked(); break;
        case 3: _t->on_back_clicked(); break;
        case 5: _t->on_inventario_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject administrador::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_administrador.data,
      qt_meta_data_administrador,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *administrador::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *administrador::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_administrador.stringdata0))
        return static_cast<void*>(const_cast< administrador*>(this));
    return QWidget::qt_metacast(_clname);
}

int administrador::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
