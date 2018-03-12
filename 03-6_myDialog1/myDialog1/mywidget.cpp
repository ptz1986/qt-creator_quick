#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>
#include "mydialog.h"

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

void myWidget::on_pushButton_clicked()
{
    close();
    myDialog dlg;
    if (dlg.exec() == QDialog::Accepted) {
        show();
    }
}
