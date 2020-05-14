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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crearcombo
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *inventario;

    void setupUi(QWidget *crearcombo)
    {
        if (crearcombo->objectName().isEmpty())
            crearcombo->setObjectName(QStringLiteral("crearcombo"));
        crearcombo->resize(704, 407);
        label = new QLabel(crearcombo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 711, 411));
        label->setPixmap(QPixmap(QString::fromUtf8(":/cinema.png")));
        label->setScaledContents(true);
        textBrowser = new QTextBrowser(crearcombo);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(465, 90, 211, 231));
        inventario = new QPushButton(crearcombo);
        inventario->setObjectName(QStringLiteral("inventario"));
        inventario->setGeometry(QRect(470, 50, 181, 23));

        retranslateUi(crearcombo);

        QMetaObject::connectSlotsByName(crearcombo);
    } // setupUi

    void retranslateUi(QWidget *crearcombo)
    {
        crearcombo->setWindowTitle(QApplication::translate("crearcombo", "Form", Q_NULLPTR));
        label->setText(QString());
        inventario->setText(QApplication::translate("crearcombo", "Inventario disponible para combos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class crearcombo: public Ui_crearcombo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARCOMBO_H
