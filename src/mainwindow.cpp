#include "mainwindow.h"

#include <QBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <iostream>
#include <qnamespace.h>
#include <ui_mainwindow.h>

MainWindow::MainWindow(QWidget* parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
    this->ui->setupUi(this);

    this->ui->pushButton->clicked();

    this->connect(this->ui->pushButton, &QPushButton::clicked, this, [this] { button_handler(); });
}

void
MainWindow::button_handler() const
{
    std::cout << "Hello, World!" << std::endl;
}

MainWindow::~MainWindow() { delete ui; }
