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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crearcombo
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *inventario;
    QTextBrowser *textcombo;
    QLineEdit *producto;
    QPushButton *agregar;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *fijar;
    QLabel *label_4;
    QSpinBox *cantidad;
    QDoubleSpinBox *doubleSpinBox;

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
        textcombo = new QTextBrowser(crearcombo);
        textcombo->setObjectName(QStringLiteral("textcombo"));
        textcombo->setGeometry(QRect(190, 80, 181, 91));
        producto = new QLineEdit(crearcombo);
        producto->setObjectName(QStringLiteral("producto"));
        producto->setGeometry(QRect(30, 90, 113, 20));
        agregar = new QPushButton(crearcombo);
        agregar->setObjectName(QStringLiteral("agregar"));
        agregar->setGeometry(QRect(30, 150, 111, 23));
        label_2 = new QLabel(crearcombo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 201, 21));
        pushButton = new QPushButton(crearcombo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(590, 370, 75, 23));
        label_3 = new QLabel(crearcombo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 60, 111, 16));
        fijar = new QPushButton(crearcombo);
        fijar->setObjectName(QStringLiteral("fijar"));
        fijar->setEnabled(false);
        fijar->setGeometry(QRect(50, 290, 121, 23));
        label_4 = new QLabel(crearcombo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 230, 181, 16));
        cantidad = new QSpinBox(crearcombo);
        cantidad->setObjectName(QStringLiteral("cantidad"));
        cantidad->setGeometry(QRect(30, 120, 111, 22));
        doubleSpinBox = new QDoubleSpinBox(crearcombo);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(50, 260, 121, 22));

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
        fijar->setText(QApplication::translate("crearcombo", "Fijar precio del combo", Q_NULLPTR));
        label_4->setText(QApplication::translate("crearcombo", "<html><head/><body><p><span style=\" font-weight:600; color:#ffff00;\">El precio final sera 30% mayor</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class crearcombo: public Ui_crearcombo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARCOMBO_H
