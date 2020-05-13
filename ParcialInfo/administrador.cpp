#include "administrador.h"
#include "ui_administrador.h"

administrador::administrador(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::administrador)
{
    ui->setupUi(this);
}

administrador::~administrador()
{
    delete ui;
}

void administrador::on_agregar_clicked()
{

}

void administrador::on_estadisticas_clicked()
{

}

void administrador::on_combos_clicked()
{

}
