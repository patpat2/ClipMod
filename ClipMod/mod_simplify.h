#ifndef MOD_SIMPLIFY_H
#define MOD_SIMPLIFY_H

#include <QString>

#include "base_mod.h"

class ModSimplify : public BaseMod
{
public:
    explicit ModSimplify(){}
    QString apply(const QString& input) Q_DECL_OVERRIDE;

};

#endif // MOD_SIMPLIFY_H
