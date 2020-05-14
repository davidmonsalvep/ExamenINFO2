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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_administrador
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *agregar;
    QLineEdit *producto;
    QSpinBox *cantidad;
    QPushButton *combos;
    QLabel *label_6;
    QPushButton *estadisticas;
    QLabel *label_5;
    QPushButton *back;
    QLabel *label_7;
    QPushButton *inventario;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *administrador)
    {
        if (administrador->objectName().isEmpty())
            administrador->setObjectName(QStringLiteral("administrador"));
        administrador->resize(813, 452);
        label = new QLabel(administrador);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 811, 451));
        label->setPixmap(QPixmap(QString::fromUtf8(":/cinema.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(administrador);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 50, 181, 41));
        label_3 = new QLabel(administrador);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 110, 71, 21));
        label_4 = new QLabel(administrador);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 150, 61, 20));
        agregar = new QPushButton(administrador);
        agregar->setObjectName(QStringLiteral("agregar"));
        agregar->setGeometry(QRect(80, 200, 111, 23));
        producto = new QLineEdit(administrador);
        producto->setObjectName(QStringLiteral("producto"));
        producto->setGeometry(QRect(80, 110, 113, 20));
        cantidad = new QSpinBox(administrador);
        cantidad->setObjectName(QStringLiteral("cantidad"));
        cantidad->setGeometry(QRect(80, 150, 111, 22));
        combos = new QPushButton(administrador);
        combos->setObjectName(QStringLiteral("combos"));
        combos->setGeometry(QRect(250, 100, 101, 71));
        label_6 = new QLabel(administrador);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(400, 60, 151, 21));
        estadisticas = new QPushButton(administrador);
        estadisticas->setObjectName(QStringLiteral("estadisticas"));
        estadisticas->setGeometry(QRect(410, 100, 91, 71));
        label_5 = new QLabel(administrador);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(250, 60, 121, 21));
        back = new QPushButton(administrador);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(680, 400, 75, 23));
        label_7 = new QLabel(administrador);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(620, 60, 91, 16));
        inventario = new QPushButton(administrador);
        inventario->setObjectName(QStringLiteral("inventario"));
        inventario->setGeometry(QRect(600, 100, 111, 31));
        textBrowser = new QTextBrowser(administrador);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(530, 141, 256, 231));

        retranslateUi(administrador);

        QMetaObject::connectSlotsByName(administrador);
    } // setupUi

    void retranslateUi(QWidget *administrador)
    {
        administrador->setWindowTitle(QApplication::translate("administrador", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("administrador", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#ffff00;\">Agregar productos</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("administrador", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#ffff00;\">Producto</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("administrador", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; color:#ffff00;\">Cantidad</span></p></body></html>", Q_NULLPTR));
        agregar->setText(QApplication::translate("administrador", "Agregar al inventario", Q_NULLPTR));
        combos->setText(QApplication::translate("administrador", "Crear combos", Q_NULLPTR));
        label_6->setText(QApplication::translate("administrador", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ffff00;\">Contabilidad</span></p></body></html>", Q_NULLPTR));
        estadisticas->setText(QApplication::translate("administrador", "Ver estadisticas", Q_NULLPTR));
        label_5->setText(QApplication::translate("administrador", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ffff00;\">Combos</span></p></body></html>", Q_NULLPTR));
        back->setText(QApplication::translate("administrador", "Regresar", Q_NULLPTR));
        label_7->setText(QApplication::translate("administrador", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ffff00;\">Inventario</span></p></body></html>", Q_NULLPTR));
        inventario->setText(QApplication::translate("administrador", "Ver inventario", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class administrador: public Ui_administrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRADOR_H
