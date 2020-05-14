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

void crearcombo::on_inventario_clicked()
{
    QString qst="";                           //coloca el cuadro vacio por defecto
    ui->textBrowser->setText(qst);

 ifstream archivo;
 archivo.open("inventario.txt");
 string line;
 QString qstr;
 while(getline(archivo,line)){                         //se lee el archivo que posee el inventario y se añade a la caja de texto
     qstr=QString::fromStdString(line);

 ui->textBrowser->append(qstr);}
}



void crearcombo::on_agregar_clicked()
{

}
