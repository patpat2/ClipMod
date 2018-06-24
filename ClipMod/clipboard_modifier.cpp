#include "clipboard_modifier.h"

#include <QClipboard>
#include <QException>
#include <QApplication>
#include <QtWidgets>

#include "base_mod.h"
#include "mod_simplify.h"

ClipboardModifier::ClipboardModifier(QObject *parent)
    : QObject(parent)
    , _clip_board(QApplication::clipboard())
{
    Q_ASSERT(_clip_board);
}

QString ClipboardModifier::runModification(const ClipboardModifier::Mod mod_to_apply)
{
    // collect the mods to run
    QList<BaseMod*> mods;
//    foreach (Mod m, mods_to_apply) {
        switch (mod_to_apply) {
        case spellCheckFeelingLucky:
        case clippingByRegExp:
        case clearFont:
            qWarning("Not yet implemented");
            throw new QException();
        case simplify:
            mods << new ModSimplify();
        }
//    }

    QString subtype;
    QString text = _clip_board->text(subtype, QClipboard::Clipboard);
    qDebug() << "input: " << text;
    qDebug() << "subtype: " << subtype;
    // apply the mods
    foreach (BaseMod* bm, mods)
        text = bm->apply(text);

    _clip_board->setText("text", QClipboard::Clipboard);
    qDebug() << "result: " << text;
    return text;
}
