#pragma once
#include "Position.h"

class Ship {
private:
	Position pozycja;
	int dlugosc;
	int ilTrafien; //uzywane w metodzie CzyZatopiony by sprawdzic czy statek zatonal (czy ilUderzen jest >= dlugosci statku)
	bool poziomy; //true jesli statek jest ustawiony poziomo, false jesli pionowo
public:
	Ship(int dlugosc,const Position& pozycja, bool poziomy);
	Position getPoz() const;
	int getDlugosc() const;
	bool czyPoziomy() const;
	bool CzyZatopiony() const;
	bool Trafienie(const Position& strzal);

};