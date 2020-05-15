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

map<string, int> crearcombo::getCombo() const
{
    return combo;
}

void crearcombo::setCombo(const map<string, int> &value)
{
    combo = value;
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

    QString qst="";                           //coloca el cuadro vacio por defecto
    ui->textcombo->setText(qst);
    QString producto=ui->producto->text();    //nombre del producto a agregar
    string product=producto.toLocal8Bit().constData();
    int cantidad=ui->cantidad->value(); //cantidad del productor

    map<string,int>com=getCombo();
    map<string,int>::iterator it;
    bool aux=false;
    for(it=com.begin();it!=com.end();it++){           //si se escribe un producto que antes ya estaba escrito se sobreescribe
        if((it->first)==product){
            com.at(product)=cantidad;
        aux=true;}
    }
    if(aux==false)
    com.insert(pair<string,int>(product,cantidad));

    ofstream archi;
    archi.open("combos.txt",ios::app | ios::ate);     //escribi en el archivo el nuevo map con la cantidad y el producto para el combo
    map<string,int>::iterator ite;
    for(ite=com.begin();ite!=com.end();ite++){
      archi<<ite->second<<"-"<<ite->first<<endl;

    }
    archi.close();
    setCombo(com);

    ifstream archivo;
    archivo.open("combos.txt");
    string line;
    QString qstr;
    while(getline(archivo,line)){                         //se lee el archivo que posee el combo y se añade a la caja de texto
        qstr=QString::fromStdString(line);

    ui->textcombo->append(qstr);}
    ui->fijar->setEnabled(true);
    ofstream archiv;  //borra todo el archivo para sobreescribirlo con los nuevos datos
    archiv.open("combos.txt",ofstream::out | ofstream::trunc);
    archiv.close();
   }















void crearcombo::on_fijar_clicked()
{
    ui->agregar->setDisabled(true);  //no permite agregar mas elementos al combo
    double valor =ui->doubleSpinBox->value();  //valor que le sale al cine
    double valorventa=valor*1.3;          //valor de venta para el combo
    map<string,int>mapa=getCombo();
    map<string,int>::iterator it;
    ofstream archi;

    archi.open("listacombos.txt",ios::app | ios::ate);        //escribe en el archivo listacombos el nuevo combo
    for(it=mapa.begin();it!=mapa.end();it++){
        archi<<it->second<<","<<it->first<<",";
    }
    archi<<"$"<<","<<valorventa<<endl;



    archi.close();
  ui->fijar->setDisabled(true);




}

void crearcombo::on_pushButton_clicked()
{
    administrador* crearcombo=new administrador();
    crearcombo->show();
    this->close();
}
