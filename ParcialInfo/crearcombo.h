#ifndef CREARCOMBO_H
#define CREARCOMBO_H

#include <QWidget>
#include "administrador.h"
#include <map>
#include <string>
#include <iterator>
#include <sstream>
#include <iostream>
using namespace std;

namespace Ui {
class crearcombo;
}

class crearcombo : public QWidget
{
    Q_OBJECT

public:
    explicit crearcombo(QWidget *parent = 0);
    ~crearcombo();
    map<string,int>combo;




    map<string, int> getCombo() const;
    void setCombo(const map<string, int> &value);

private slots:
    void on_inventario_clicked();

    void on_agregar_clicked();

    void on_fijar_clicked();

    void on_pushButton_clicked();

private:
    Ui::crearcombo *ui;
};

#endif // CREARCOMBO_H
