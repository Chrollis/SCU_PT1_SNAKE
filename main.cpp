#include "mainwindow.h"

#include <QApplication>
#include <QFont>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int font_id = QFontDatabase::addApplicationFont(":/font/ark-pixel.ttf");
    if (font_id == -1)
    {
        return 1;
    }
    QStringList font_fmls = QFontDatabase::applicationFontFamilies(font_id);
    if (font_fmls.isEmpty())
    {
        return 1;
    }
    QString font_fml = font_fmls.at(0);
    QFont main_font(font_fml);
    QApplication::setFont(main_font);

    MainWindow w;
    w.show();
    return a.exec();
}
