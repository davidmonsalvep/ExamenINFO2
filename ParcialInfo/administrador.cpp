#include "administrador.h"
#include "ui_administrador.h"
#include <iterator>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>

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
    map<string,int>mapa=getInventario();


    vector<string>palabras;

    ifstream archivo;
    archivo.open("inventario.txt");
    string line;
    string clave;
    string valor;
    int cursor=0;
    int aux;
    char splitter=',';
    if(archivo.is_open()){
        while(getline(archivo,line)){
            for(string::iterator it=line.begin(); it!=line.end();++it){ // para dividir la linea en la clave y el valor
                aux=0;
                if((*it)!=splitter){
                    if(aux==0)
                   clave=clave+(*it);  //asigna la primer palabra de la linea a la clave


                    if(aux==1)

                        valor=valor+(*it); //asigna el numero al valor
            }
                else
                    aux=aux+1;


            }
            stringstream geek(valor);  //string a int
                    int x =0;
                    geek>>x;
             mapa.insert(pair<string,int>(clave,x));  //inserta en el diccionario cada clave y su valor
        }
    }
    archivo.close();

    aux=0;
    map<string,int>::iterator it;
    for(it=mapa.begin();it!=mapa.end();++it){
        string claveaux = it->first;
        int valoraux= it->second;
        if(product==claveaux){
            it->second=valoraux+cantidad;
            aux++;
        }

    }
   if(aux!=0)
       mapa.insert(pair<string,int>(product,cantidad));

   ofstream archiv;
   archiv.open("inventario.txt",ofstream::out | ofstream::trunc);
   archiv.close();

   ofstream archi;
   archi.open("inventario.txt",ofstream::out);
   map<string,int>::iterator ite;
   for(ite=mapa.begin();ite!=mapa.end();++ite)
     archi<<ite->first<<","<<ite->second<<","<<endl;


   archi.close();



}

void administrador::on_estadisticas_clicked()
{

}

void administrador::on_combos_clicked()
{

}
