/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "on_Btc_Calcular_clicked",
        "",
        "on_LE_IP_textChanged",
        "arg1",
        "on_RB_Hosts_toggled",
        "checked",
        "on_RB_Subredes_toggled",
        "calculoSubredes",
        "mascara",
        "subRedes",
        "calculoVLSM",
        "vector<pair<int,int>>",
        "hosts",
        "on_Btn_Agregar_clicked",
        "mascaraDecimal",
        "avance",
        "int[4]",
        "octetos",
        "on_Btc_Calcular_2_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_Btc_Calcular_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_LE_IP_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'on_RB_Hosts_toggled'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'on_RB_Subredes_toggled'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'calculoSubredes'
        QtMocHelpers::SlotData<void(int, int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 }, { QMetaType::Int, 10 },
        }}),
        // Slot 'calculoVLSM'
        QtMocHelpers::SlotData<void(int, vector<pair<int,int>>)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 }, { 0x80000000 | 12, 13 },
        }}),
        // Slot 'on_Btn_Agregar_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'mascaraDecimal'
        QtMocHelpers::SlotData<QString(int)>(15, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'avance'
        QtMocHelpers::SlotData<QString(int, int)>(16, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { 0x80000000 | 17, 18 }, { QMetaType::Int, 16 },
        }}),
        // Slot 'on_Btc_Calcular_2_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_Btc_Calcular_clicked(); break;
        case 1: _t->on_LE_IP_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_RB_Hosts_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_RB_Subredes_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->calculoSubredes((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->calculoVLSM((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<vector<pair<int,int>>>>(_a[2]))); break;
        case 6: _t->on_Btn_Agregar_clicked(); break;
        case 7: { QString _r = _t->mascaraDecimal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->avance((*reinterpret_cast< std::add_pointer_t<int[4]>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->on_Btc_Calcular_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
