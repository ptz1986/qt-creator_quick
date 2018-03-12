#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
    QDialog * dialog = new QDialog(this);
    dialog->setModal(true);
    dialog->show();
}

myWidget::~myWidget()
{
    delete ui;
}
