#pragma once
#include "Player.h"

class Computer : public Player {
private:
	bool sprPola[size][size];
public:
	Computer();
	virtual void ustawStatki();
	virtual Position twojRuch(); //zwraca nowa pozycje (losowo)
};