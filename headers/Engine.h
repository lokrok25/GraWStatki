#pragma once
#include "Player.h"
using namespace std;

class Engine {
protected:
	Player* gracze[2]; //tu przechowuje wskazniki do obiektow - Human i Computer (mozna bo sa to klasy dzieci wobec klasy Player)
	int obecnyGracz;	
	
	virtual void ruchGracza(int indGracza, const Position& poz, bool trafienie);	
public:
	Engine(Player* p1, Player* p2);
	virtual ~Engine();
	void run();
};