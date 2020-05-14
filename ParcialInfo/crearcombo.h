#ifndef CREARCOMBO_H
#define CREARCOMBO_H

#include <QWidget>
#include "administrador.h"

namespace Ui {
class crearcombo;
}

class crearcombo : public QWidget
{
    Q_OBJECT

public:
    explicit crearcombo(QWidget *parent = 0);
    ~crearcombo();

private slots:
    void on_inventario_clicked();

    void on_agregar_clicked();

private:
    Ui::crearcombo *ui;
};

#endif // CREARCOMBO_H
