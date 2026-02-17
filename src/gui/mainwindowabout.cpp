/***************************************************************************
 *   (C) 2010 by Michal Rudolf mrudolf@kdewebdev.org                       *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/

#include "mainwindow.h"
#include "version.h"

void MainWindow::slotHelpAbout()
{
	QString fastbits = Board::fastbitsOption ? tr("Compiled with 'fastbits' option<br>") : "";
    QMessageBox dialog(tr("About DualChessX"), tr(
                        "<h1>DualChessX</h1>"
                        "Fork of ChessX 0.8.&nbsp;License: GPL-3 (GPL-3.0-only)<br/>"
                        "<a href='https://github.com/dualword/dualchessx'>https://github.com/dualword/dualchessx</a><hr/>"
                        "<h1>ChessX</h1>"
						"<p>Free chess database available under GPLv2.<br>Version %1<br>%2"
						"Copyright 2005-2010 ChessX developers"
						"<p>Current developer and maintainer: <a href=\"mailto:mrudolf"
						"@kdewebdev.org\">Michal Rudolf</a>"
						"<p>Testing, usability and website: Bruno Rizzuti"
						"<p>Additional coding: Marius Roets, Sean Estabrooks, Rico Zenklusen, "
						"Ejner Borgbjerg, Heinz Hopfgartner, William Hoggarth."
						"<p>Homepage: <a href=\"http://chessx.sf.net\">http://chessx.sf.net</a><br>"
						"Mailing list: <a href=\"mailto:chessx-users@lists.sourceforge.net\">"
						"chessx-users@lists.sourceforge.net").arg(ChessXVersion)
				.arg(fastbits),
				QMessageBox::NoIcon, QMessageBox::Ok, Qt::NoButton, Qt::NoButton, this);
	dialog.exec();
}

