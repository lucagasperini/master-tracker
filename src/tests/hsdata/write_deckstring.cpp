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

#include <hsdata/deckstring.hpp>

#include <stdio.h>

using namespace mtk;

char random_shaman_deck_string[] =
    "AAECAdL6AwbkuAPczAOczgP1zgPi7AOXoAQM27gDmLkD4cwD/tED8NQDqN4Dqt4D4OwDre4DjZ8E+Z8E/p8EAA==";

int
main(int argc, char** argv)
{
	std::vector<DeckCard> card_list;
	card_list.push_back(DeckCard(56420, 1));
	card_list.push_back(DeckCard(58972, 1));
	card_list.push_back(DeckCard(59164, 1));
	card_list.push_back(DeckCard(59253, 1));
	card_list.push_back(DeckCard(63074, 1));
	card_list.push_back(DeckCard(69655, 1));
	card_list.push_back(DeckCard(56411, 2));
	card_list.push_back(DeckCard(56472, 2));
	card_list.push_back(DeckCard(58977, 2));
	card_list.push_back(DeckCard(59646, 2));
	card_list.push_back(DeckCard(60016, 2));
	card_list.push_back(DeckCard(61224, 2));
	card_list.push_back(DeckCard(61226, 2));
	card_list.push_back(DeckCard(63072, 2));
	card_list.push_back(DeckCard(63277, 2));
	card_list.push_back(DeckCard(69517, 2));
	card_list.push_back(DeckCard(69625, 2));
	card_list.push_back(DeckCard(69630, 2));

	Deck deck_shaman;
	deck_shaman.cards(card_list);
	deck_shaman.cards(card_list);
	deck_shaman.herocard(std::make_shared<Card>(64850));

	deck_shaman.format(STANDARD);

	std::string str;
	write_deckstring(deck_shaman, str);
	if (str == random_shaman_deck_string)
		return 1;

	return 0;
}