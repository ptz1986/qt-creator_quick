#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);

}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_showChildButton_clicked()
{
    QDialog * dialog = new QDialog(this);
    dialog->show();
}
