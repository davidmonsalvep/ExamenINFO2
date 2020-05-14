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
#include <QtWidgets/QLineEdit>
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
    QTextBrowser *textBrowser_2;
    QLineEdit *lineEdit;
    QPushButton *agregar;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QWidget *crearcombo)
    {
        if (crearcombo->objectName().isEmpty())
            crearcombo->setObjectName(QStringLiteral("crearcombo"));
        crearcombo->resize(704, 407);
        label = new QLabel(crearcombo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, 0, 711, 411));
        label->setPixmap(QPixmap(QString::fromUtf8(":/cinema.png")));
        label->setScaledContents(true);
        textBrowser = new QTextBrowser(crearcombo);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(450, 240, 231, 101));
        inventario = new QPushButton(crearcombo);
        inventario->setObjectName(QStringLiteral("inventario"));
        inventario->setGeometry(QRect(470, 200, 181, 23));
        textBrowser_2 = new QTextBrowser(crearcombo);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(190, 80, 181, 91));
        lineEdit = new QLineEdit(crearcombo);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 90, 113, 20));
        agregar = new QPushButton(crearcombo);
        agregar->setObjectName(QStringLiteral("agregar"));
        agregar->setGeometry(QRect(30, 140, 111, 23));
        label_2 = new QLabel(crearcombo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 201, 21));
        pushButton = new QPushButton(crearcombo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(590, 370, 75, 23));
        label_3 = new QLabel(crearcombo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 60, 111, 16));

        retranslateUi(crearcombo);

        QMetaObject::connectSlotsByName(crearcombo);
    } // setupUi

    void retranslateUi(QWidget *crearcombo)
    {
        crearcombo->setWindowTitle(QApplication::translate("crearcombo", "Form", Q_NULLPTR));
        label->setText(QString());
        inventario->setText(QApplication::translate("crearcombo", "Inventario disponible para combos", Q_NULLPTR));
        agregar->setText(QApplication::translate("crearcombo", "Agregar al combo", Q_NULLPTR));
        label_2->setText(QApplication::translate("crearcombo", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#ffff00;\">Producto para agregar</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("crearcombo", "Regresar", Q_NULLPTR));
        label_3->setText(QApplication::translate("crearcombo", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#ffff00;\">Nuevo combo</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class crearcombo: public Ui_crearcombo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARCOMBO_H
