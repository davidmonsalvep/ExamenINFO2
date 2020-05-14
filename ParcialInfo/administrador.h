#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <QWidget>
#include <fstream>
#include <QMessageBox>
#include <iterator>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "entrada.h"
#include "crearcombo.h"

using namespace std;

namespace Ui {
class administrador;
}

class administrador : public QWidget
{
    Q_OBJECT

public:
    explicit administrador(QWidget *parent = 0);
    ~administrador();

    map<string,int>inventario;

    map<string, int> getInventario() const;
    void setInventario(const map<string, int> &value);

private slots:
    void on_agregar_clicked();

    void on_estadisticas_clicked();

    void on_combos_clicked();

    void on_back_clicked();

    void on_pushButton_2_clicked();

    void on_inventario_clicked();

private:
    Ui::administrador *ui;
};

#endif // ADMINISTRADOR_H
