#include <QApplication>
#include <QDesktopWidget>
#include "html5applicationviewer.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    int height,width;

    Html5ApplicationViewer viewer;
    viewer.setOrientation(Html5ApplicationViewer::ScreenOrientationAuto);
    viewer.showExpanded();
    QRect rec = QApplication::desktop()->screenGeometry();
     height = rec.height();
     width = rec.width();
    viewer.resize(width,height);
    viewer.loadFile(QLatin1String("html/app/app/dist/index.html"));

    return app.exec();
}
