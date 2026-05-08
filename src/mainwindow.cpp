#include "mainwindow.h"

#include <QBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <qnamespace.h>
#include <ui_mainwindow.h>

MainWindow::MainWindow(QWidget* parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }
