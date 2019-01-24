#include "start_window.h"
#include "ui_start_window.h"
#include <QIcon>
start_window::start_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::start_window)
{
    ui->setupUi(this);
    connect(ui->button_create_base,SIGNAL(clicked(bool)),this,SLOT(on_button_create_base_clicked()));
    //ui->graphicsView->addAction(QIcon(":resource/images/2017-5-8_8-32-0-33.png"));
}

start_window::~start_window()
{
    delete ui;
}

void start_window::on_button_create_base_clicked()
{//MainWindow *w=new MainWindow(0);
   // MainWindow w(0);
   w.show();
    this->setEnabled(false);
}
