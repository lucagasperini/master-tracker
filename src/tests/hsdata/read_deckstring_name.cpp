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
    "### Mazzo Sciamano2\n"
    "# Classe: Sciamano\n"
    "# Formato: Standard\n"
    "# Anno del Grifone\n"
    "# \n"
    "# 2x (0) Fioritura Fulminea\n"
    "# 2x (1) Dardo Fulminante\n"
    "# 2x (1) Elementale Fiammeggiante\n"
    "# 1x (1) Iniziato Intrepido\n"
    "# 2x (2) Arma Roccia Dura\n"
    "# 2x (2) Bacchettaia\n"
    "# 2x (2) Custode dell'Arena\n"
    "# 2x (2) Studente Diligente\n"
    "# 1x (2) Thalnos\n"
    "# 2x (3) Apparizione della Palude\n"
    "# 2x (3) Assalto della Tempesta\n"
    "# 1x (3) Dama Vashj\n"
    "# 2x (3) Fulminatore Arido\n"
    "# 1x (3) Istruttrice Cuorfiammante\n"
    "# 1x (3) Oratrice Gidra\n"
    "# 2x (3) Portale: Sacrespire\n"
    "# 1x (4) Bru'kan\n"
    "# 2x (5) Martelfato\n"
    "# \n"
    "AAECAdL6AwbkuAPczAOczgP1zgPi7AOXoAQM27gDmLkD4cwD/tED8NQDqN4Dqt4D4OwDre4DjZ8E+Z8E/p8EAA==\n"
    "# \n"
    "# Per utilizzare questo mazzo, copialo negli appunti e crea un nuovo mazzo in Hearthstone";

int
main(int argc, char** argv)
{
	char name[DEF_BUFFER_STR];
	read_deckstring_page_name(random_shaman_deck_string,
				  name,
				  DEF_BUFFER_STR);
	if (strcmp(name, "Mazzo Sciamano2") != 0) {
		return 1;
	}

	return 0;
}