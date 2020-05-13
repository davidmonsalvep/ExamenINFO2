#include "crearcombo.h"
#include "ui_crearcombo.h"

crearcombo::crearcombo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::crearcombo)
{
    ui->setupUi(this);
}

crearcombo::~crearcombo()
{
    delete ui;
}
