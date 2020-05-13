/********************************************************************************
** Form generated from reading UI file 'crearcombo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARCOMBO_H
#define UI_CREARCOMBO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crearcombo
{
public:

    void setupUi(QWidget *crearcombo)
    {
        if (crearcombo->objectName().isEmpty())
            crearcombo->setObjectName(QStringLiteral("crearcombo"));
        crearcombo->resize(400, 300);

        retranslateUi(crearcombo);

        QMetaObject::connectSlotsByName(crearcombo);
    } // setupUi

    void retranslateUi(QWidget *crearcombo)
    {
        crearcombo->setWindowTitle(QApplication::translate("crearcombo", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class crearcombo: public Ui_crearcombo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARCOMBO_H
