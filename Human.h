#pragma once
#include <string>
#include "Player.h"
using namespace std;

class Human : public Player {
private:
	string initFile;
public:
	Human(const string& initFile);
	virtual void ustawStatki(); 
	virtual Position twojRuch();  //zwraca nowa pozycje, po wpisaniu koordynatow
};
