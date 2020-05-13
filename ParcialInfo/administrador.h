#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <QWidget>

namespace Ui {
class administrador;
}

class administrador : public QWidget
{
    Q_OBJECT

public:
    explicit administrador(QWidget *parent = 0);
    ~administrador();

private slots:
    void on_agregar_clicked();

    void on_estadisticas_clicked();

    void on_combos_clicked();

private:
    Ui::administrador *ui;
};

#endif // ADMINISTRADOR_H
