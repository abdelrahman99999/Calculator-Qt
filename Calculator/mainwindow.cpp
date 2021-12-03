#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "support.h"
#include<QDebug>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_n1,SIGNAL(pressed()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_n2,SIGNAL(pressed()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_n3,SIGNAL(pressed()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_n4,SIGNAL(pressed()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_n5,SIGNAL(pressed()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_n6,SIGNAL(pressed()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_n7,SIGNAL(pressed()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_n8,SIGNAL(pressed()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_n9,SIGNAL(pressed()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_n0,SIGNAL(pressed()),this,SLOT(digit_pressed()));

    connect(ui->pushButton_leftbracket,SIGNAL(pressed()),this,SLOT(add_brackets()));
    connect(ui->pushButton_rightbracket,SIGNAL(pressed()),this,SLOT(add_brackets()));

    connect(ui->pushButton_add,SIGNAL(pressed()),this,SLOT(binary_operation()));
    connect(ui->pushButton_minus,SIGNAL(pressed()),this,SLOT(binary_operation()));
    connect(ui->pushButton_div,SIGNAL(pressed()),this,SLOT(binary_operation()));
    connect(ui->pushButton_mult,SIGNAL(pressed()),this,SLOT(binary_operation()));
    connect(ui->pushButton_exp,SIGNAL(pressed()),this,SLOT(binary_operation()));

    //equal and Clear operations done by Gui(so they are hidden here)
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{

    QPushButton *button=(QPushButton*)sender(); //sender return object that call method
    if(ui->label->text()=="0"){
        ui->label->setText(button->text());
    }else{
        string exp=ui->label->text().toStdString();
        size_t length=exp.length();
        if(exp[length-1]=='+'||exp[length-1]=='*'||exp[length-1]=='-'||exp[length-1]=='/' ||exp[length-1]=='^'|| exp[length-1]=='(')
            ui->label->setText(ui->label->text()+' '+button->text());
        else
            ui->label->setText(ui->label->text()+button->text());
    }

}

void MainWindow::on_pushButton_clear_pressed()
{
    ui->label->setText("0");
    ui->label_3->setText("0");
}

void MainWindow::on_pushButton_equal_pressed()
{
    ui->label_2->setText(ui->label->text());
    string expression=ui->label->text().toStdString();
    long long result=evaluate(expression);
    ui->label->setText(QString::number(result,'g',15));
    //ui->statusBar->showMessage("valid expression",1000);
    ui->label_3->setText(QString::fromStdString(infixToPostfix(expression)));

}

void MainWindow::binary_operation(){
    QPushButton*button =(QPushButton*)sender();
    ui->label->setText(ui->label->text()+' '+button->text());
}

void MainWindow::add_brackets(){
    QPushButton*button =(QPushButton*)sender();
    ui->label->setText(ui->label->text()+' '+button->text());
}
