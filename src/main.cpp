#include <QApplication>
#include <QFile>
#include <qlabel.h>

#include "mainwindow.h"

int
main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    QFile style_file("../stylesheets/styles.css");

    if (style_file.open(QIODevice::ReadOnly)) {
        QTextStream text_stream(&style_file);

        QString style_sheet = text_stream.readAll();
        style_file.close();

        a.setStyleSheet(style_sheet);
    }

    MainWindow w;
    w.show();

    return QCoreApplication::exec();
}
