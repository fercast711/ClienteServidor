/****************************************************************************
** Meta object code from reading C++ file 'servidor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../servidor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'servidor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Servidor_t {
    QByteArrayData data[11];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Servidor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Servidor_t qt_meta_stringdata_Servidor = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Servidor"
QT_MOC_LITERAL(1, 9, 9), // "Configura"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 13), // "newConnection"
QT_MOC_LITERAL(4, 34, 9), // "Refrescar"
QT_MOC_LITERAL(5, 44, 6), // "Enviar"
QT_MOC_LITERAL(6, 51, 11), // "ManteEquipo"
QT_MOC_LITERAL(7, 63, 13), // "SeleccionarEn"
QT_MOC_LITERAL(8, 77, 13), // "MantePartidos"
QT_MOC_LITERAL(9, 91, 7), // "Guardar"
QT_MOC_LITERAL(10, 99, 5) // "Abrir"

    },
    "Servidor\0Configura\0\0newConnection\0"
    "Refrescar\0Enviar\0ManteEquipo\0SeleccionarEn\0"
    "MantePartidos\0Guardar\0Abrir"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Servidor[] = {

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
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    1,   62,    2, 0x0a /* Public */,
       6,    0,   65,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,
       9,    0,   68,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Servidor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Servidor *_t = static_cast<Servidor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Configura(); break;
        case 1: _t->newConnection(); break;
        case 2: _t->Refrescar(); break;
        case 3: _t->Enviar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->ManteEquipo(); break;
        case 5: _t->SeleccionarEn(); break;
        case 6: _t->MantePartidos(); break;
        case 7: _t->Guardar(); break;
        case 8: _t->Abrir(); break;
        default: ;
        }
    }
}

const QMetaObject Servidor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Servidor.data,
      qt_meta_data_Servidor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Servidor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Servidor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Servidor.stringdata0))
        return static_cast<void*>(const_cast< Servidor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Servidor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
