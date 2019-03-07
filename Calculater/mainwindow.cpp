#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setAlignment(Qt::AlignRight);
    this->setWindowTitle("Calculator");
    this->setFixedSize(270,390);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow :: addDigitLineEdit(QPushButton * btn){
    ui->lineEdit->setText(ui->lineEdit->text()+btn->text());
}
double MainWindow :: getLineEdit(){
    return ui->lineEdit->text().toDouble();
}


void MainWindow::on_pushButton_clicked()
{
    addDigitLineEdit(ui->pushButton);
}

void MainWindow::on_pushButton_2_clicked()
{

    addDigitLineEdit(ui->pushButton_2);
}

void MainWindow::on_pushButton_3_clicked()
{

    addDigitLineEdit(ui->pushButton_3);
}
void MainWindow::on_pushButton_4_clicked()
{
    addDigitLineEdit(ui->pushButton_4);
}
void MainWindow::on_pushButton_5_clicked()
{
    addDigitLineEdit(ui->pushButton_5);
}
void MainWindow::on_pushButton_6_clicked()
{
    addDigitLineEdit(ui->pushButton_6);
}
void MainWindow::on_pushButton_7_clicked()
{
    addDigitLineEdit(ui->pushButton_7);
}void MainWindow::on_pushButton_8_clicked()
{

    addDigitLineEdit(ui->pushButton_8);
}
void MainWindow::on_pushButton_9_clicked()
{
    addDigitLineEdit(ui->pushButton_9);
}
void MainWindow::on_pushButton_11_clicked()
{
    addDigitLineEdit(ui->pushButton_11);
}

void MainWindow::on_pushButton_13_clicked()
{
    if(isFirstProcess==true){
        result=getLineEdit();
    }
    selectedProcess=0;
    ui->lineEdit->clear();
}
void MainWindow::on_pushButton_17_clicked()
{
    if(isFirstProcess==true){
        result=getLineEdit();
    }
    selectedProcess=4;
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_16_clicked()
{
    if(isFirstProcess==true){
        result=getLineEdit();
    }
    selectedProcess=2;
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_15_clicked()
{
    if(isFirstProcess==true){
        result=getLineEdit();
    }
    selectedProcess=1;
    ui->lineEdit->clear();
}
void MainWindow::on_pushButton_10_clicked()
{
    if(isFirstProcess==true){
        result=getLineEdit();
    }
    selectedProcess=3;
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_12_clicked()
{
    switch (selectedProcess) {
    case 0:
        result+=getLineEdit();
        break;
    case 1:
        result-=getLineEdit();
        break;
    case 2:
        result*=getLineEdit();
        break;
    case 3:
        if (getLineEdit() == 0){
            return;
        }
        result/=getLineEdit();
        break;
    case 4:
        result=(int)result % (int)getLineEdit();
        break;

    default:
        break;
    }
    ui->lineEdit->setText(QString :: number(result));
}





void MainWindow::on_pushButton_14_clicked()
{
    result=0;
    ui->lineEdit->setText("");
}


