/* DualChessX (2026) https://github.com/dualword/dualchessx License:GPL-3 (GPL-3.0-only)*/
/****************************************************************************
*   Copyright (C) 2010 by Michal Rudolf <mrudolf@kdewebdev.org>           *
****************************************************************************/

#ifndef PLAINTEXTEDIT_H
#define PLAINTEXTEDIT_H

#include <QtWidgets>

class PlainTextEdit : public QPlainTextEdit
{
public:
    PlainTextEdit(QWidget* parent = 0);
protected:
    virtual void keyPressEvent(QKeyEvent* event);
};

#endif // PLAINTEXTEDIT_H
