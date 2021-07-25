// Copyright (C) 2021 Luca Gasperini
//
// This file is part of Master Tracker.
//
// Master Tracker is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Master Tracker is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Master Tracker.  If not, see <http://www.gnu.org/licenses/>.

#ifndef MTK_GUI_PLAYWINDOW_H
#define MTK_GUI_PLAYWINDOW_H

#include "widgets/deckwidget.hpp"

#include <QMainWindow>

#include <hsmng/gamemanager.hpp>
#include <hsmng/gamewatcher.hpp>
#include <hsmng/logworker.hpp>
//! \file

class Ui_PlayWindow;

namespace mtk
{
class PlayWindow : public QMainWindow
{
	Q_OBJECT

      private:
	Ui_PlayWindow* ui;

	std::shared_ptr<GameManager> gamemanager;

      public:
	explicit PlayWindow(QWidget* parent = nullptr);
	~PlayWindow() Q_DECL_OVERRIDE;
	void init(const std::shared_ptr<GameManager>& gm);

      public slots:
	void player_cards_changed(const std::shared_ptr<Player>& p);
};

}    // namespace mtk

#endif	  // MAINWINDOW_H
