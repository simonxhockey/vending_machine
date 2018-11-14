#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    int money_;
    int rest_, for500_, for100_, for50_, for10_;
    void setControl();

private slots:
    void on_pb500_clicked();

    void on_pb100_clicked();

    void on_pb50_clicked();

    void on_pb10_clicked();

    void on_pbcoffee_clicked();

    void on_pbtea_clicked();

    void on_pbcola_clicked();

    void on_pbreset_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H


