#ifndef CLIPBOARD_MODIFIER_H
#define CLIPBOARD_MODIFIER_H

#include <QList>
#include <QObject>
#include <QString>

class ClipboardModifier : public QObject
{
    Q_OBJECT

    QClipboard* _clip_board;
public:
    enum Mod {
        spellCheckFeelingLucky,
        clippingByRegExp,
        clearFont,
        simplify
    };

    explicit ClipboardModifier(QObject *parent = nullptr);

signals:

public slots:
    QString runModification(const Mod mods_to_apply);
};

#endif // CLIPBOARD_MODIFIER_H
