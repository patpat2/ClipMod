#ifndef MOD_SIMPLIFY_H
#define MOD_SIMPLIFY_H

#include <QObject>
#include <QString>

class ModSimplify : public QObject
{
    Q_OBJECT
public:
    explicit ModSimplify(QObject *parent = nullptr);

signals:

public slots:
    QString apply();

private:
};

#endif // MOD_SIMPLIFY_H
