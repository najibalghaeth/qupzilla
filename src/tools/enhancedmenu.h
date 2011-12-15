/* ============================================================
* QupZilla - WebKit based browser
* Copyright (C) 2010-2011  David Rosca <nowrep@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#ifndef ENHANCEDMENU_H
#define ENHANCEDMENU_H

#include <QMenu>
#include <QMouseEvent>

class Menu : public QMenu
{
    Q_OBJECT
public:
    explicit Menu(QWidget* parent = 0);
    explicit Menu(const QString &title, QWidget* parent = 0);

signals:

public slots:

private:
    void mouseReleaseEvent(QMouseEvent* e);

    void closeAllMenus();

};

class Action : public QAction
{
    Q_OBJECT
public:
    explicit Action(QObject* parent = 0);
    explicit Action(const QString &text, QObject* parent = 0);
    explicit Action(const QIcon &icon, const QString &text, QObject* parent = 0);

signals:
    void middleClicked();

public slots:
    void triggerMiddleClick();

};

#endif // ENHANCEDMENU_H
