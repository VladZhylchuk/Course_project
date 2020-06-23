/****************************************************************************
** Meta object code from reading C++ file 'adminaccount.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Conect_BD/adminaccount.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminaccount.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminAccount_t {
    QByteArrayData data[14];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminAccount_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminAccount_t qt_meta_stringdata_AdminAccount = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AdminAccount"
QT_MOC_LITERAL(1, 13, 19), // "on_Add_Film_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(4, 61, 5), // "index"
QT_MOC_LITERAL(5, 67, 17), // "on_Delete_clicked"
QT_MOC_LITERAL(6, 85, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(7, 107, 12), // "Sort_by_Year"
QT_MOC_LITERAL(8, 120, 16), // "Sort_by_duration"
QT_MOC_LITERAL(9, 137, 14), // "Sort_by_budget"
QT_MOC_LITERAL(10, 152, 13), // "Sort_by_title"
QT_MOC_LITERAL(11, 166, 8), // "Show_all"
QT_MOC_LITERAL(12, 175, 19), // "on_Delete_2_clicked"
QT_MOC_LITERAL(13, 195, 19) // "on_Delete_3_clicked"

    },
    "AdminAccount\0on_Add_Film_clicked\0\0"
    "on_tabWidget_tabBarClicked\0index\0"
    "on_Delete_clicked\0on_comboBox_activated\0"
    "Sort_by_Year\0Sort_by_duration\0"
    "Sort_by_budget\0Sort_by_title\0Show_all\0"
    "on_Delete_2_clicked\0on_Delete_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminAccount[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    1,   70,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminAccount::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminAccount *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Add_Film_clicked(); break;
        case 1: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_Delete_clicked(); break;
        case 3: _t->on_comboBox_activated(); break;
        case 4: _t->Sort_by_Year(); break;
        case 5: _t->Sort_by_duration(); break;
        case 6: _t->Sort_by_budget(); break;
        case 7: _t->Sort_by_title(); break;
        case 8: _t->Show_all(); break;
        case 9: _t->on_Delete_2_clicked(); break;
        case 10: _t->on_Delete_3_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdminAccount::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AdminAccount.data,
    qt_meta_data_AdminAccount,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdminAccount::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminAccount::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminAccount.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdminAccount::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
