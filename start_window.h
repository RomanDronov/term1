#ifndef START_WINDOW_H
#define START_WINDOW_H
#include "mainwindow.h"

#include <QWidget>

namespace Ui {
class start_window;
}

class start_window : public QWidget
{
    Q_OBJECT
    MainWindow w;

public:
    explicit start_window(QWidget *parent = 0);
    ~start_window();

private slots:
    void on_button_create_base_clicked();

private:
    Ui::start_window *ui;
};

#endif // START_WINDOW_H
