#include "mod_simplify.h"

#include <QClipboard>
#include <QApplication>

QString ModSimplify::apply(const QString& input)
{
    const QString result = input.simplified();
    return result;
}
