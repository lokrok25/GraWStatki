#pragma once
#include "Engine.h"
#include "Computer.h"
#include "Human.h"
using namespace std;

class GameTXT : public Engine {
private:
	Human human;
	Computer computer;
protected:	
	virtual void ruchGracza(int indGracza, const Position& poz, bool trafienie);	
public:
	GameTXT(const string& initFile);
};
