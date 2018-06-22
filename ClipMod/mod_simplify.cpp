#include "mod_simplify.h"

#include <QClipboard>
#include <QApplication>

ModSimplify::ModSimplify(QObject *parent) : QObject(parent)
{
}

QString ModSimplify::apply()
{
    QClipboard* clip = QApplication::clipboard();
    const QString result = clip->text().simplified();
    clip->setText(result);
    return result;
}
