#include <QApplication>
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Login fen1;
    fen1.show();

    return app.exec();
}
