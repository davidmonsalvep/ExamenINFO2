/********************************************************************************
** Form generated from reading UI file 'administrador.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRADOR_H
#define UI_ADMINISTRADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_administrador
{
public:

    void setupUi(QWidget *administrador)
    {
        if (administrador->objectName().isEmpty())
            administrador->setObjectName(QStringLiteral("administrador"));
        administrador->resize(627, 384);

        retranslateUi(administrador);

        QMetaObject::connectSlotsByName(administrador);
    } // setupUi

    void retranslateUi(QWidget *administrador)
    {
        administrador->setWindowTitle(QApplication::translate("administrador", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class administrador: public Ui_administrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRADOR_H
