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
            string auxi=to_string(aux);
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

}
