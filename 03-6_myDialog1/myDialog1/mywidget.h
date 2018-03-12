#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class myWidget;
}

class myWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myWidget(QWidget *parent = 0);
    ~myWidget();

private:
    Ui::myWidget *ui;

public slots:
    void on_showChildButton_clicked();
private slots:
    void on_pushButton_clicked();
};

#endif // MYWIDGET_H