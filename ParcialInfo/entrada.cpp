#include "entrada.h"
#include "ui_entrada.h"
#include "mainwindow.h"
using namespace std;


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

void Entrada::on_admon_clicked()   //para entrar al modo admon
{
    bool aux=false;
    ifstream archivo("admon.txt");
    QString contra=ui->contra->text(); //Contraseña para entrar al modo admin
    string contrase=contra.toLocal8Bit().constData();
    string line;

    if (archivo.is_open()){   //comprueba que la contraseña ingresada sea igual que la que posee el archivo con la correcta
        while(getline(archivo,line)){
            if(line==contrase){
                aux=true;
            }
        }
    }

    if(aux==true){  //cambia de formulario
        administrador* entrada=new administrador();
        entrada->show();
        this->close();
    }
    else
        QMessageBox::about(this,"Error","Contraseña de admon incorrecta"); //mensaje de contraseña incorrecta

    archivo.close();







}

void Entrada::on_clientes_clicked()  //para entrar al modo cliente
{
    QString nombre=ui->nombre->text();                   //nombre del cliente
    QString asiento=ui->asiento->text();                   //asiento del cliente
    string nomb=nombre.toLocal8Bit().constData();
    string asi=asiento.toLocal8Bit().constData();

    ofstream archiv;  //borra todo el archivo para sobreescribirlo con los nuevos datos
    archiv.open("clientes.txt",ofstream::out | ofstream::trunc);
    archiv.close();

    ofstream archivo;
    archivo.open("clientes.txt",std::ios::app | std::ios::ate); //para escribir en el archivo que guarda el nombre y asiento del cliente
    archivo<<"Nombre: "<<nomb<<" Asiento: "<<asi<<endl;
    archivo.close();
    QMessageBox::about(this,"Hecho","Listo! Que deseas ordenar.");

    MainWindow* entrada=new MainWindow();  //cambia de formulario
    entrada->show();
    this->close();





}

void Entrada::on_pushButton_2_clicked()
{

}
