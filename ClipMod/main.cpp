#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "clipboard_modifier.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<ClipboardModifier>("clipmod.clipboard_modifier", 1, 0, "ClipboardModifier");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
