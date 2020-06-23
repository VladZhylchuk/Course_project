/****************************************************************************
** Meta object code from reading C++ file 'useraccount.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Conect_BD/useraccount.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'useraccount.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserAccount_t {
    QByteArrayData data[16];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserAccount_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserAccount_t qt_meta_stringdata_UserAccount = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UserAccount"
QT_MOC_LITERAL(1, 12, 19), // "on_Add_Film_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(4, 60, 5), // "index"
QT_MOC_LITERAL(5, 66, 8), // "Show_all"
QT_MOC_LITERAL(6, 75, 22), // "on_Film_delete_clicked"
QT_MOC_LITERAL(7, 98, 23), // "on_comboBox_2_activated"
QT_MOC_LITERAL(8, 122, 4), // "arg1"
QT_MOC_LITERAL(9, 127, 12), // "Sort_by_Year"
QT_MOC_LITERAL(10, 140, 16), // "Sort_by_duration"
QT_MOC_LITERAL(11, 157, 14), // "Sort_by_budget"
QT_MOC_LITERAL(12, 172, 13), // "Sort_by_title"
QT_MOC_LITERAL(13, 186, 12), // "refresh_list"
QT_MOC_LITERAL(14, 199, 21), // "on_search_textChanged"
QT_MOC_LITERAL(15, 221, 27) // "on_listWidget_2_itemClicked"

    },
    "UserAccount\0on_Add_Film_clicked\0\0"
    "on_tabWidget_tabBarClicked\0index\0"
    "Show_all\0on_Film_delete_clicked\0"
    "on_comboBox_2_activated\0arg1\0Sort_by_Year\0"
    "Sort_by_duration\0Sort_by_budget\0"
    "Sort_by_title\0refresh_list\0"
    "on_search_textChanged\0on_listWidget_2_itemClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserAccount[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    1,   75,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    1,   80,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    1,   88,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

void UserAccount::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserAccount *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Add_Film_clicked(); break;
        case 1: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->Show_all(); break;
        case 3: _t->on_Film_delete_clicked(); break;
        case 4: _t->on_comboBox_2_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->Sort_by_Year(); break;
        case 6: _t->Sort_by_duration(); break;
        case 7: _t->Sort_by_budget(); break;
        case 8: _t->Sort_by_title(); break;
        case 9: _t->refresh_list(); break;
        case 10: _t->on_search_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_listWidget_2_itemClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserAccount::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_UserAccount.data,
    qt_meta_data_UserAccount,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserAccount::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserAccount::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserAccount.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UserAccount::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
