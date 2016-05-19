/****************************************************************************
** Meta object code from reading C++ file 'mediaapp.h'
**
** Created: Tue May 17 12:05:32 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mediaapp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediaapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MediaApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   16,   16,   16, 0x08,
      17,   16,   16,   16, 0x08,
      36,   16,   16,   16, 0x08,
      53,   16,   16,   16, 0x08,
      73,   90,   16,   16, 0x08,
      99,  118,   16,   16, 0x08,
     123,   16,   16,   16, 0x28,
     138,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MediaApp[] = {
    "MediaApp\0open()\0\0toggleFullScreen()\0"
    "onStateChanged()\0onPositionChanged()\0"
    "setPosition(int)\0position\0showControls(bool)\0"
    "show\0showControls()\0hideControls()\0"
};

void MediaApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MediaApp *_t = static_cast<MediaApp *>(_o);
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->toggleFullScreen(); break;
        case 2: _t->onStateChanged(); break;
        case 3: _t->onPositionChanged(); break;
        case 4: _t->setPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showControls((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showControls(); break;
        case 7: _t->hideControls(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MediaApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MediaApp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MediaApp,
      qt_meta_data_MediaApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MediaApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MediaApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MediaApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MediaApp))
        return static_cast<void*>(const_cast< MediaApp*>(this));
    return QWidget::qt_metacast(_clname);
}

int MediaApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
