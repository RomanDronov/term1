#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBox_aircraft->hide();
    ui->groupBox_helicopter->hide();
    ui->search_groupBox->hide();
    connect(ui->radioButton_aircraft,SIGNAL(clicked(bool)),this,SIGNAL(on_radioButton_aircraft_clicked(bool)));
    connect(ui->radioButton_helicopter,SIGNAL(clicked(bool)),this,SLOT(on_radioButton_helicopter_clicked(bool)));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(save_aircraft()));
    connect(ui->aircraft_name_lineEdit,SIGNAL(textChanged(QString)),this,SLOT(replacement(QString)));

    connect(ui->search_button,SIGNAL(clicked(bool)),this,SLOT(search()));

    ui->checkBox->setChecked(true);
    bool b = ui->checkBox->isChecked();
    //bool c=ui->radioButton->isChecked();
   // qDebug() << c;

}

MainWindow::~MainWindow()
{
    
    delete ui;
}
void MainWindow::setData(){

}

void MainWindow::save_aircraft()
{ QString name_in;
    int max_altitude,speed,capacity,range;
    name_in=ui->aircraft_name_lineEdit->text();
    max_altitude=ui->aircraft_max_altitude_spinBox->value();
    speed=ui->aircaft_speed_spinBox->value();
    capacity=ui->aircraft_passanger_capacit_spinBox->value();
    range=ui->aircraft_range_spinBox->value();
    Aircraft *ptr=new Aircraft(name_in,max_altitude,speed,capacity,range);
   int index=ui->aircraft_airport_chouse_box->currentIndex();
   airfac.createCraft(ptr,dac.airports.at(index));
}
void MainWindow::search(){
    Airport airp= dac.airports.at(0);
    for(int i=0;i<4;i++){
    Craft*c = airp.content.at(i);
    QTableWidgetItem *item_name=new QTableWidgetItem();
  //  QTableWidgetItem *item_country=new QTableWidgetItem();
    //QTableWidgetItem *item_result=new QTableWidgetItem();
    Aircraft* ap = static_cast<Aircraft*>(c);
  item_name->setText(ap->name);
 //
   ui->tableWidget->setItem(i,0,item_name);
    }
   // ui->rresult_text->setText(ap->wing_size);

}

void MainWindow::on_radioButton_aircraft_clicked(bool checked)
{ui->groupBox_helicopter->hide();
    ui->groupBox_aircraft->show();
    ui->search_groupBox->hide();
  // ui->horizontalLayout->activate();
}

void MainWindow::on_radioButton_helicopter_clicked(bool checked)
{ui->search_groupBox->hide();
    ui->groupBox_aircraft->hide();
    ui->groupBox_helicopter->show();
}

void MainWindow::on_pushButton_2_clicked()
{//bool v;
    QString n,a,b,c,d;
        a=ui->helicopter_lineEdit_capacity->text();
        b=ui->helicopter_lineEdit_crew_szie->text();
        c=ui->helicopter_lineEdit_max_altitude->text();
        d=ui->helicopter_lineEdit_speed->text();
       // Helicopter *ptr=new Helicopter(a,b,c,d);
    //   int index=ui->irport_chouse_box->currentIndex();
      // helicopter_factory.createCraft(ptr,dac.airports.at(index));
     n=ui->checkBox->checkState();
 //    v=ui->radioButton->isChecked();
      qDebug()<<"check "<<n;
}


void MainWindow::on_search_radioButton_clicked()
{ ui->groupBox_aircraft->hide();
    ui->search_groupBox->show();
}

void MainWindow::on_pushButton_3_clicked()
{int range_search;
    range_search=ui->search_range_spinBox->value();
    Airport airp= dac.airports.at(0);
    for(int i=0;i<airp.content.size();i++){
    Craft*c = airp.content.at(i);
     QTableWidgetItem *item_name=new QTableWidgetItem();
  //  QTableWidgetItem *item_country=new QTableWidgetItem();
    //QTableWidgetItem *item_result=new QTableWidgetItem();
    Aircraft* ap = static_cast<Aircraft*>(c);
    int show_count=0;
    if(ap->range>=range_search){
        ui->tableWidget->insertRow(show_count);
        item_name->setText(ap->name);
  // item_name->setText(ap->max_altitude);

   ui->tableWidget->setItem(show_count,0,item_name);
   show_count++;
    }
   // ui->rresult_text->setText(ap->wing_size);

}
}
void MainWindow::replacement(QString str){
    if(str=="Boeing 737"){
        ui->aircraft_max_altitude_spinBox->setValue(11000);
        ui->aircraft_range_spinBox->setValue(5000);
        ui->aircraft_passanger_capacit_spinBox->setValue(150);
        ui->aircaft_speed_spinBox->setValue(820);
    }
}
