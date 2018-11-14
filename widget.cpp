#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    money_ = 0;
    setControl();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setControl()
{
    ui->lcdNumber->display(money_);
    ui->pbcoffee->setEnabled(money_ >= 100);
    ui->pbtea->setEnabled(money_ >= 150);
    ui->pbcola->setEnabled(money_ >= 200);
}

void Widget::on_pb500_clicked()
{
    money_ += 500;
    setControl();
}

void Widget::on_pb100_clicked()
{
    money_ += 100;
    setControl();
}

void Widget::on_pb50_clicked()
{
    money_ += 50;
    setControl();
}

void Widget::on_pb10_clicked()
{
    money_ += 10;
    setControl();
}

void Widget::on_pbcoffee_clicked()
{
    money_ -= 100;
    setControl();
}

void Widget::on_pbtea_clicked()
{
    money_ -= 150;
    setControl();
}

void Widget::on_pbcola_clicked()
{
    money_ -= 200;
    setControl();
}

void Widget::on_pbreset_clicked()
{
    for500_ = money_/500;
    money_ -= for500_ * 500;
    for100_ = money_/100;
    money_ -= for100_ * 100;
    for50_ = money_/50;
    money_ -= for50_ * 50;
    for10_ = money_/10;
    money_ = 0;
    setControl();
    QMessageBox::information(this,"Return",QString("500won: %1, 100won: %2, 50won: %3, 10won: %4").arg(for500_).arg(for100_).arg(for50_).arg(for10_), "OK");
}


