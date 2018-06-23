#ifndef BASE_MOD_H
#define BASE_MOD_H

#include <QString>


class BaseMod
{
    /**
     * Applies the modification of sub class to the clipboard
     *
     * @returns the result, which is also written back to the clip board
     */
    QString virtual apply() = 0;

};

#endif // BASE_MOD_H
