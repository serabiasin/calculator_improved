#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_satu_clicked()
{
        this->set_penampungan_str("1");
}

void MainWindow::on_dua_clicked()
{

    this->set_penampungan_str("2");
}

void MainWindow::on_tiga_clicked()
{
    this->set_penampungan_str("3");
}

void MainWindow::on_enam_clicked()
{
    this->set_penampungan_str("6");
}

void MainWindow::on_lima_clicked()
{
    this->set_penampungan_str("5");
}

void MainWindow::on_empat_clicked()
{
    this->set_penampungan_str("4");
}

void MainWindow::on_sembilan_clicked()
{
    this->set_penampungan_str("9");
}

void MainWindow::on_delapan_clicked()
{
    this->set_penampungan_str("8");
}

void MainWindow::on_tujuh_clicked()
{
    this->set_penampungan_str("7");
}

void MainWindow::on_pushButton_14_clicked()
{
    this->set_penampungan_str("0");
}



void MainWindow::set_penampungan_str(QString x){
QString show_it;

penampungan_to_text+=x;
show_it=penampungan_to_text;

angka1=penampungan_to_text.toFloat();

ui->display_kal->setText(show_it);

}

void MainWindow::set_null_penampungan_text(){
    penampungan_to_text="\0";
}

QString MainWindow::get_penampungan_text(){
    return penampungan_to_text;
}



void MainWindow::on_pushButton_10_clicked() //tambah
{
    flag=1;
    QString spase;

   spase=this->get_penampungan_text();
   temp=spase.toFloat();

   set_null_penampungan_text();

   penampungan_to_text.clear();

   ui->display_kal->clear();


}

void MainWindow::on_pushButton_11_clicked() //kurang
{

        flag=2;
        QString spase;
        spase=this->get_penampungan_text();
       temp=spase.toFloat();
       set_null_penampungan_text();
           penampungan_to_text.clear();
           ui->display_kal->clear();
}

void MainWindow::on_pushButton_13_clicked() //kali
{
        flag=3;
        QString spase;
        spase=this->get_penampungan_text();
       temp=spase.toFloat();
       set_null_penampungan_text();
           penampungan_to_text.clear();
           ui->display_kal->clear();

}

void MainWindow::on_pushButton_12_clicked() //bagi
{
    QString spase;
    flag=4;
     spase=this->get_penampungan_text();
   temp=spase.toFloat();
   set_null_penampungan_text();
       penampungan_to_text.clear();
       ui->display_kal->clear();
}

int MainWindow::get_flag(){
    return flag;
}
float MainWindow::get_angka(){
    return angka1;
}

float MainWindow::get_temp(){
    return temp;
}

void MainWindow::on_sikat_clicked()
{
float c;

QString kambing;

int bendera;

    bendera=get_flag();
    switch(bendera){
    case 1:{//tambah

c=this->get_angka()+this->get_temp();
kambing=QString::number(c); //FIXED

break;}
    case 2:{
        c=this->get_temp()-this->get_angka();
        kambing=QString::number(c);
        break;} //kurang
    case 3:{
        c=this->get_angka()*this->get_temp();
        kambing=QString::number(c);
        break;} //kali
    case 4:{

        c=this->get_temp()/this->get_angka();
        kambing=QString::number(c);
        break;} //bagi
    }
    set_null_penampungan_text();
    set_penampungan_str(kambing);
    ui->display_kal->setText(kambing);


}



void MainWindow::on_hapus_clicked()
{
    angka1=0;
    set_null_penampungan_text();
    penampungan_to_text.clear();
    temp=0;
   ui-> display_kal->clear();
}
