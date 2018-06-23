#ifndef MOD_SIMPLIFY_H
#define MOD_SIMPLIFY_H

#include <QObject>
#include <QString>

#include "base_mod.h"

class ModSimplify : public QObject, public BaseMod
{
    Q_OBJECT
public:
    explicit ModSimplify(QObject *parent = nullptr);

signals:

public slots:
    QString apply() Q_DECL_OVERRIDE;

private:
};

#endif // MOD_SIMPLIFY_H
