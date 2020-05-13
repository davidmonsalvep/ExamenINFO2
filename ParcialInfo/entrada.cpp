#include "entrada.h"
#include "ui_entrada.h"
#include "mainwindow.h"


Entrada::Entrada(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Entrada)
{
    ui->setupUi(this);
}

Entrada::~Entrada()
{
    delete ui;
}

void Entrada::on_admon_clicked()
{
    bool aux=false;
    ifstream archivo("admon.txt");







}

void Entrada::on_clientes_clicked()
{

}
