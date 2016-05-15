/****************************************************************************
** Meta object code from reading C++ file 'qthreadtcp.h'
**
** Created: Sun May 15 06:21:57 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qthreadtcp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qthreadtcp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QThreadTCP[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   23,   23,   23, 0x0a,
      24,   23,   23,   23, 0x0a,
      39,   60,   23,   23, 0x0a,
      66,   23,   23,   23, 0x0a,
      78,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QThreadTCP[] = {
    "QThreadTCP\0connected()\0\0disconnected()\0"
    "bytesWritten(qint64)\0bytes\0readyRead()\0"
    "update()\0"
};

void QThreadTCP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QThreadTCP *_t = static_cast<QThreadTCP *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->readyRead(); break;
        case 4: _t->update(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QThreadTCP::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QThreadTCP::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QThreadTCP,
      qt_meta_data_QThreadTCP, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QThreadTCP::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QThreadTCP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QThreadTCP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QThreadTCP))
        return static_cast<void*>(const_cast< QThreadTCP*>(this));
    return QThread::qt_metacast(_clname);
}

int QThreadTCP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
