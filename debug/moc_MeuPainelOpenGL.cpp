/****************************************************************************
** Meta object code from reading C++ file 'MeuPainelOpenGL.h'
**
** Created: Tue 2. Oct 23:37:23 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MeuPainelOpenGL.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MeuPainelOpenGL.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeuPainelOpenGL[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   17,   16,   16, 0x0a,
      39,   37,   16,   16, 0x0a,
      65,   59,   16,   16, 0x0a,
      83,   59,   16,   16, 0x0a,
     102,   16,   16,   16, 0x0a,
     123,  119,   16,   16, 0x0a,
     146,  144,   16,   16, 0x0a,
     165,  162,   16,   16, 0x0a,
     191,  188,   16,   16, 0x0a,
     213,  211,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MeuPainelOpenGL[] = {
    "MeuPainelOpenGL\0\0l\0alterarLados(int)\0"
    "r\0alterarRaio(double)\0malha\0"
    "alterarMalha(int)\0ocultarMalha(bool)\0"
    "construirMalha()\0num\0numeroPoligonos(int)\0"
    "j\0alterarCor(int)\0vm\0setCorVermelho(double)\0"
    "vd\0setCorVerde(double)\0a\0setCorAzul(double)\0"
};

const QMetaObject MeuPainelOpenGL::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_MeuPainelOpenGL,
      qt_meta_data_MeuPainelOpenGL, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeuPainelOpenGL::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeuPainelOpenGL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeuPainelOpenGL::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeuPainelOpenGL))
        return static_cast<void*>(const_cast< MeuPainelOpenGL*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int MeuPainelOpenGL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: alterarLados((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: alterarRaio((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: alterarMalha((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: ocultarMalha((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: construirMalha(); break;
        case 5: numeroPoligonos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: alterarCor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: setCorVermelho((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: setCorVerde((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: setCorAzul((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
