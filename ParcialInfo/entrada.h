#ifndef ENTRADA_H
#define ENTRADA_H

#include <QWidget>
#include <iostream>
#include <fstream>
#include <QMainWindow>
#include <QMessageBox>
#include "administrador.h"

namespace Ui {
class Entrada;
}

class Entrada : public QWidget
{
    Q_OBJECT

public:
    explicit Entrada(QWidget *parent = 0);
    ~Entrada();

private slots:
    void on_admon_clicked();

    void on_clientes_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Entrada *ui;
};

#endif // ENTRADA_H
