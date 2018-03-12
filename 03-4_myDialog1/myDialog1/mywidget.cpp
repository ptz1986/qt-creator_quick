#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
    connect(ui->showChildButton, SIGNAL(clicked()), this, SLOT(on_showChildDialog_clicked()));
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_showChildDialog_clicked()
{
    QDialog * dialog = new QDialog(this);
    dialog->show();
}
