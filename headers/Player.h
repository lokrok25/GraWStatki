#pragma once
#include "Position.h"
#include <vector>
#include "Ship.h"

using namespace std;

class Player {
protected:
	static const int size = 10;
	char plansza[size][size]; //'.' to woda(puste pole), 'S' to statek, 'H' to hit(trafienie), 'M' to miss (pudlo)
	vector<Ship> ships;
public:
	Player();
	virtual ~Player();
	virtual Position twojRuch() = 0; //swego rodzaju interfejs metody do dwoch klas dziedziczacych 
	virtual void ustawStatki() = 0;	 //ustawienie statkow i ruchy losowe dla komputera
									 //my jako gracz wprowadzamy koordynaty strzalu i podajemy plik z ustawieniem statkow
	bool przyjmijStrzal(const Position& poz); 
	bool ustawStatek(const Ship& ship);
	bool wszStatkiZatonely() const;

	friend class Engine;
	friend class GameTXT;
};