/********************************************************************************
** Form generated from reading UI file 'entrada.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRADA_H
#define UI_ENTRADA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Entrada
{
public:
    QLabel *fondo;
    QPushButton *admon;
    QPushButton *clientes;
    QLineEdit *contra;
    QLineEdit *nombre;
    QLabel *labcpmtra;
    QLabel *labnombre;
    QLabel *labnombre_2;
    QLineEdit *cedula;

    void setupUi(QWidget *Entrada)
    {
        if (Entrada->objectName().isEmpty())
            Entrada->setObjectName(QStringLiteral("Entrada"));
        Entrada->resize(478, 334);
        fondo = new QLabel(Entrada);
        fondo->setObjectName(QStringLiteral("fondo"));
        fondo->setGeometry(QRect(80, 50, 331, 231));
        fondo->setPixmap(QPixmap(QString::fromUtf8(":/images.png")));
        fondo->setScaledContents(true);
        admon = new QPushButton(Entrada);
        admon->setObjectName(QStringLiteral("admon"));
        admon->setGeometry(QRect(110, 200, 81, 31));
        clientes = new QPushButton(Entrada);
        clientes->setObjectName(QStringLiteral("clientes"));
        clientes->setGeometry(QRect(290, 200, 81, 31));
        contra = new QLineEdit(Entrada);
        contra->setObjectName(QStringLiteral("contra"));
        contra->setGeometry(QRect(100, 140, 113, 20));
        contra->setEchoMode(QLineEdit::Password);
        nombre = new QLineEdit(Entrada);
        nombre->setObjectName(QStringLiteral("nombre"));
        nombre->setGeometry(QRect(270, 110, 113, 20));
        labcpmtra = new QLabel(Entrada);
        labcpmtra->setObjectName(QStringLiteral("labcpmtra"));
        labcpmtra->setGeometry(QRect(90, 90, 141, 41));
        labcpmtra->setTextFormat(Qt::AutoText);
        labnombre = new QLabel(Entrada);
        labnombre->setObjectName(QStringLiteral("labnombre"));
        labnombre->setGeometry(QRect(270, 90, 121, 21));
        labnombre_2 = new QLabel(Entrada);
        labnombre_2->setObjectName(QStringLiteral("labnombre_2"));
        labnombre_2->setGeometry(QRect(280, 140, 91, 21));
        cedula = new QLineEdit(Entrada);
        cedula->setObjectName(QStringLiteral("cedula"));
        cedula->setGeometry(QRect(270, 160, 113, 20));
        cedula->setEchoMode(QLineEdit::Normal);

        retranslateUi(Entrada);

        QMetaObject::connectSlotsByName(Entrada);
    } // setupUi

    void retranslateUi(QWidget *Entrada)
    {
        Entrada->setWindowTitle(QApplication::translate("Entrada", "Form", Q_NULLPTR));
        fondo->setText(QString());
        admon->setText(QApplication::translate("Entrada", "Administracion", Q_NULLPTR));
        clientes->setText(QApplication::translate("Entrada", "Clientes", Q_NULLPTR));
        labcpmtra->setText(QApplication::translate("Entrada", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">CONTRASE\303\221A DE ADMON</span></p></body></html>", Q_NULLPTR));
        labnombre->setText(QApplication::translate("Entrada", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">NOMBRE CLIENTE</span></p></body></html>", Q_NULLPTR));
        labnombre_2->setText(QApplication::translate("Entrada", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">CEDULA</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Entrada: public Ui_Entrada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRADA_H
