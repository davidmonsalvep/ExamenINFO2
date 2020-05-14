#include "administrador.h"
#include "ui_administrador.h"
#include <iterator>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <QFile>
#include <QTextStream>




using namespace std;

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

map<string, int> administrador::getInventario() const
{
    return inventario;
}

void administrador::setInventario(const map<string, int> &value)
{
    inventario = value;
}


void administrador::on_agregar_clicked()
{

    QString producto=ui->producto->text();    //nombre del producto a agregar
    string product=producto.toLocal8Bit().constData();
    int cantidad=ui->cantidad->value(); //cantidad del productor
    map<string,int>mapa;


    vector<string>palabras;

    ifstream archivo;
    archivo.open("inventario.txt");
    string line;

    string clave;
    string valor;

    int aux=0;
    char splitter=',';

    if(archivo.is_open()){
        while(getline(archivo,line)){ //para leer los productos que ya hay en el inventario y los guarda en un map
            aux=0;
            clave="";
            valor="";
            for(string::iterator it=line.begin(); it!=line.end();it++){ // para dividir la linea en la clave y el valor

                if((*it)!=splitter){ //compara cada letra con la ,
                    if(aux==0)
                   clave=clave+(*it);  //asigna la primer palabra de la linea a la clave del map
                    if(aux==1)
                        valor=valor+(*it); //asigna el numero al valor del map
            }
                if((*it)==splitter)
                    aux=aux+1;


            }
            stringstream geek(valor);  //string a int
                    int x =0;
                    geek>>x;
             mapa.insert(pair<string,int>(clave,x));  //inserta en el diccionario cada clave y su valor
        }
    }
    archivo.close();

    bool bul=false;
    string claveaux;
    int cantidaux;
    int sum=0;
    map<string,int>::iterator it;
    for(it=mapa.begin();it!=mapa.end();it++){  //Compara el archivo para ver si ya existe el producto en el inventario

        claveaux = it->first;
        cantidaux=it->second;
        sum=cantidaux+cantidad;
        if(product==claveaux){

           mapa.at(claveaux)=sum;       //suma a la cantidad anterior la nueva cantidad agregada al inventario

            bul=true;
        }

    }
   if(bul==false)
       mapa.insert(pair<string,int>(product,cantidad)); //inserta los productos que no existian

   ofstream archiv;  //borra todo el archivo para sobreescribirlo con los nuevos datos
   archiv.open("inventario.txt",ofstream::out | ofstream::trunc);
   archiv.close();

   ofstream archi;
   archi.open("inventario.txt",ios::app | ios::ate);     //escribi en el archivo el nuevo map con los valores reestablecidos del inventario
   map<string,int>::iterator ite;
   for(ite=mapa.begin();ite!=mapa.end();ite++)
     archi<<ite->first<<","<<ite->second<<endl;
   archi.close();

  setInventario(mapa);

}

void administrador::on_estadisticas_clicked() //permite ver las ventas
{

}


void administrador::on_back_clicked()  //devuelve al pantallazo inicial
{
  Entrada* administrador=new Entrada();
  administrador->show();
  this->close();
}


void administrador::on_inventario_clicked()   //para poder ver el inventario
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

void administrador::on_combos_clicked()  //para crear combos
{
    crearcombo* administrador=new crearcombo();
    administrador->show();
    this->close();
}
