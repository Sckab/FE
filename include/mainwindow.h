#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE

namespace Ui {

class MainWindow;

}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

  public:
    explicit MainWindow(QWidget* parent = nullptr);

    void button_handler() const;

    ~MainWindow() override;

  private:
    Ui::MainWindow* ui;
};
