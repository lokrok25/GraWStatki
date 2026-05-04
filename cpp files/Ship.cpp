#include "Ship.h"

Ship::Ship(int dlugosc_,const Position& pozycja_,bool poziomy_):dlugosc(dlugosc_), pozycja(pozycja_), poziomy(poziomy_), ilTrafien(0) {}

Position Ship::getPoz() const { return pozycja; }

int Ship::getDlugosc() const { return dlugosc; }

bool Ship::czyPoziomy() const { return poziomy; }

bool Ship::CzyZatopiony() const { return ilTrafien >= dlugosc; }

bool Ship::Trafienie(const Position& strzal)
{
	for (int i = 0; i < dlugosc; ++i)
	{
		int xi = pozycja.x + (poziomy ? i : 0); //jesli poziomy to zwieksz x o 1
		int yi = pozycja.y + (poziomy ? 0 : i); //jesli pionowy to zwieksz o 1
		if (xi == strzal.x && yi == strzal.y)
		{
			++ilTrafien;
			return true;
		}
	}
	return false;
}
