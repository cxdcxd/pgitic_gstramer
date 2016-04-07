/****************************************************************************
** Meta object code from reading C++ file 'myserver.h'
**
** Created: Thu Apr 7 10:59:24 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../myserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyServer[] = {

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
       9,   21,   21,   21, 0x0a,
      22,   21,   21,   21, 0x0a,
      37,   21,   21,   21, 0x0a,
      46,   21,   21,   21, 0x0a,
      61,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyServer[] = {
    "MyServer\0readyRead()\0\0disconnected()\0"
    "update()\0ping_checker()\0print_client_list()\0"
};

void MyServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyServer *_t = static_cast<MyServer *>(_o);
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->update(); break;
        case 3: _t->ping_checker(); break;
        case 4: _t->print_client_list(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MyServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_MyServer,
      qt_meta_data_MyServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyServer))
        return static_cast<void*>(const_cast< MyServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int MyServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
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
