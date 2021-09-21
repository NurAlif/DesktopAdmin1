
#include <QApplication>
#include <QPushButton>
//! [0]
//! [1] //! [2]
int main(int argc, char *argv[])
//! [1] //! [3] //! [4]
{
    QApplication app(argc, argv);
//! [3]

//! [8]
    QPushButton hello("Hello world!");
//! [8]
    hello.resize(100, 30);

    hello.show();
    return app.exec();
}