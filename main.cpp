#include "mainwindow.h"
#include <QApplication>
#include "start_window.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   //MainWindow w;
   start_window s;
   s.show();
  // w.show();

    return a.exec();
}
