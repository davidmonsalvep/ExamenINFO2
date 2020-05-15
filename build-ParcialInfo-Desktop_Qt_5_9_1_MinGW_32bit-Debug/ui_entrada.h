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
    QLineEdit *asiento;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Entrada)
    {
        if (Entrada->objectName().isEmpty())
            Entrada->setObjectName(QStringLiteral("Entrada"));
        Entrada->resize(478, 334);
        fondo = new QLabel(Entrada);
        fondo->setObjectName(QStringLiteral("fondo"));
        fondo->setGeometry(QRect(0, 0, 481, 331));
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
        labcpmtra->setGeometry(QRect(70, 90, 161, 41));
        labcpmtra->setTextFormat(Qt::AutoText);
        labnombre = new QLabel(Entrada);
        labnombre->setObjectName(QStringLiteral("labnombre"));
        labnombre->setGeometry(QRect(270, 90, 121, 21));
        labnombre_2 = new QLabel(Entrada);
        labnombre_2->setObjectName(QStringLiteral("labnombre_2"));
        labnombre_2->setGeometry(QRect(250, 140, 151, 21));
        asiento = new QLineEdit(Entrada);
        asiento->setObjectName(QStringLiteral("asiento"));
        asiento->setGeometry(QRect(270, 160, 113, 20));
        asiento->setEchoMode(QLineEdit::Normal);
        label = new QLabel(Entrada);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 30, 181, 51));
        pushButton_2 = new QPushButton(Entrada);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 300, 71, 21));

        retranslateUi(Entrada);

        QMetaObject::connectSlotsByName(Entrada);
    } // setupUi

    void retranslateUi(QWidget *Entrada)
    {
        Entrada->setWindowTitle(QApplication::translate("Entrada", "Form", Q_NULLPTR));
        fondo->setText(QString());
        admon->setText(QApplication::translate("Entrada", "Administracion", Q_NULLPTR));
        clientes->setText(QApplication::translate("Entrada", "Clientes", Q_NULLPTR));
        labcpmtra->setText(QApplication::translate("Entrada", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffff00;\">CONTRASE\303\221A DE ADMON</span></p></body></html>", Q_NULLPTR));
        labnombre->setText(QApplication::translate("Entrada", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffff00;\">NOMBRE CLIENTE</span></p></body></html>", Q_NULLPTR));
        labnombre_2->setText(QApplication::translate("Entrada", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffff00;\">NUMERO DE SU ASIENTO</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Entrada", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ffff00;\">CINEMAS INFO II</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Entrada", "Cinemas", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Entrada: public Ui_Entrada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRADA_H
