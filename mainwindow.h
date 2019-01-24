#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "aircraft_factory.h"
#include "data.h"
#include "aircraft.h"
#include "craft_factory.h"
#include "crafts.h"
#include "helicopter.h"
#include "helicopter_factory.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{Aircraft_factory airfac;
    Helicopter_factory helicopter_factory;
   // QString n=1;
    Data dac;
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    //Aircraft_factory factory;
    ~MainWindow();
    void setData();

private slots:
    void save_aircraft();
    void search();

    void on_radioButton_aircraft_clicked(bool checked);

    void on_radioButton_helicopter_clicked(bool checked);

    void on_pushButton_2_clicked();


    void on_search_radioButton_clicked();

    void on_pushButton_3_clicked();
    void replacement(QString);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
