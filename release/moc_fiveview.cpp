/****************************************************************************
** Meta object code from reading C++ file 'fiveview.h'
**
** Created: Sun Nov 12 14:58:36 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../model/fiveview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fiveview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fiveView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_fiveView[] = {
    "fiveView\0"
};

const QMetaObject fiveView::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_fiveView,
      qt_meta_data_fiveView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fiveView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fiveView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fiveView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fiveView))
        return static_cast<void*>(const_cast< fiveView*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int fiveView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
