#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
void addDigitLineEdit(QPushButton *btn);
double getLineEdit();
bool isFirstProcess=true;
double result=0,digit1=0,digit2=0;
int selectedProcess=-1;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_11_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_13_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_17_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
