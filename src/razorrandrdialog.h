/*
 * Copyright (c) 2012 Francisco Salvador Ballina Sánchez <zballinita@gmail.com>
 * Copyright (c) 2007 Gustavo Pichorim Boiko <gustavo.boiko@kdemail.net>
 * Copyright (c) 2007 Harry Bock <hbock@providence.edu>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef RAZORRANDRDIALOG_H
#define RAZORRANDRDIALOG_H

#include <QtGui/QDialog>
#include "randrdisplay.h"

namespace Ui {
class RazorRandrDialog;
}

class RazorRandrDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RazorRandrDialog(RandRDisplay *dpy, QWidget *parent = 0);
    ~RazorRandrDialog();

private:
    Ui::RazorRandrDialog *ui;
    RandRDisplay *mDisplay;
};

#endif // RAZORRANDRDIALOG_H
