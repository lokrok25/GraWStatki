#include "../include/Engine.h"
#include <iostream>
using namespace std;


void Engine::ruchGracza(int indGracza, const Position& poz, bool trafienie) {}


using namespace std;

Engine::Engine(Player* p1, Player* p2)
{
	gracze[0] = p1;	//tu przechowuje wskaznik do Human
	gracze[1] = p2; //tu wskaznik do Computer
	obecnyGracz = 0; //jako ze i Human i Computer dziedzicza po Player to w tej tablicy moga byc tez przechowywane wskazniki do tych obiektow
}

Engine::~Engine() {}

void Engine::run()
{
	cout << "Start Gry!" << endl;
	gracze[0]->ustawStatki();
	gracze[1]->ustawStatki();
	bool koniecgry = false;
	while (!koniecgry)
	{
		cout << "Teraz tura gracza " << obecnyGracz + 1 << endl;
		
		bool trafienie = false;


		do
		{
			Position poz = gracze[obecnyGracz]->twojRuch();
			trafienie = gracze[1 - obecnyGracz]->przyjmijStrzal(poz);
			ruchGracza(obecnyGracz, poz, trafienie);

			//sprawdzenie czy przeciwnik  przegral
			if (gracze[1 - obecnyGracz]->wszStatkiZatonely())
			{
				koniecgry = true;
				cout << "Zwycieza gracz: " << obecnyGracz + 1 << endl;
				break;  
			}
		
		} while (trafienie); //jestli trafilismy to strzelamy ponownie

		if (koniecgry)
		{
			break;
		}
		obecnyGracz = 1 - obecnyGracz; // zmiana gracza
	}
}