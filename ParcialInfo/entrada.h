#ifndef ENTRADA_H
#define ENTRADA_H

#include <QWidget>
#include <iostream>
#include <QMainWindow>
#include <fstream>

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

private:
    Ui::Entrada *ui;
};

#endif // ENTRADA_H
