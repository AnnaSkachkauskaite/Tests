#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->push, SIGNAL(clicked()), &timer, SLOT(start()));
    connect(&timer, SIGNAL(timeout()), this, SLOT(changeProgress()));



}

Widget::~Widget()
{
    delete ui;
}

void Widget::onQuitClicked()
{
    qApp->quit();
}

void Widget::changeProgress()
{
    ui->progressBar->setValue(ui->progressBar->value() + 1);
        if (ui->progressBar->value() == 100)
        {
            timer.stop();
            disconnect(&timer, SIGNAL(timeout()), this, SLOT(changeProgress()));
            disconnect(ui->push, SIGNAL(clicked()), &timer, SLOT(start()));
            ui->push->setText("Quit");
            connect(ui->push, SIGNAL(clicked()), this, SLOT(onQuitClicked()));
        }
}
