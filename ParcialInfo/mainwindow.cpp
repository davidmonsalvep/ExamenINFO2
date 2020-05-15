#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ifstream archivo("clientes.txt");
    string line;

    if (archivo.is_open()){   //para poner el nombre y el asiento
        while(getline(archivo,line)){
            QString qstr = QString::fromStdString(line);
            ui->nombrea->setText(qstr);
}

    }
    archivo.close();

    ifstream archi("listacombos.txt");   //para desplegar los combos
    string lin;
    int aux=1;
    if(archi.is_open()){
        while(getline(archi,lin)){

            string auxi=to_string(aux); //numero del combo
            QString numerocom=QString::fromStdString(auxi);
            QString linea=QString::fromStdString(lin);
            ui->textBrowser->append(numerocom);
            ui->textBrowser->append(linea);
            aux++;
        }
    }
    archi.close();





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    Entrada* MainWindow=new Entrada();  //cambia de formulario
    MainWindow->show();
    this->close();



}

void MainWindow::on_pushButton_clicked()
{
 int nucombo =ui->spinBox->value();
 ifstream archivo("listacombos.txt");
 string line;
 string combo;
 int aux=1;

 if (archivo.is_open()){       //para obtener el combo que corresponde al numero ingresado por el cliente
     while(getline(archivo,line)){
       if(aux==nucombo){
           combo=line;   //guara la linea del combo
       break;
       }
       else
     aux++;

}}
 aux=0;

 archivo.close();
 map<string,string>compra;
 char splitter=',';
 string clave;
 string valor;
 for(string::iterator it=combo.begin();it!=combo.end();it++){
     if((*it)!=splitter){
     if((aux%2)==0)
          clave=clave+(*it);
     if((aux%2)!=0)
         valor=valor+(*it);
     }
     else{
         aux++;

     }
     if(aux%2==0){
         compra.insert(pair<string,string>(clave,valor));
     }
 }
 ofstream archi;

 archi.open("pruebas.txt",ios::app | ios::ate);
 for(map<string,string>::iterator it=compra.begin();it!=compra.end();it++)
     archi<<it->first<<","<<it->second<<endl;
 archi.close();














}
