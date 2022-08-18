#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mytcpserver.h"
#include "TextMessage.pb.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    TextMessage message;
    message.set_name("Adam");
    message.set_message("Hejcia");

    message.SerializeAsString();

}

MainWindow::~MainWindow()
{
    delete ui;
}

