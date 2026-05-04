#include "GameTXT.h"
#include <iostream>
using namespace std;

GameTXT::GameTXT(const string& initFile):human(initFile), computer(), Engine(&human, &computer) {} 
//wywolanie konstruktora human z argumentem - przekazanie initFile do human, 
// wywolanie konstruktora computer(), 
// stworzenie obiektu engine - przekazanie adresow human i computer do konstruktora klasy Engine



void GameTXT::ruchGracza(int indGracza, const Position& poz, bool trafienie)
{	
	cout << "Gracz " << indGracza + 1 << " strzela w (" << poz.x + 1 << ", " << poz.y + 1 << ") - "<< (trafienie ? "Trafienie!" : "Pudlo!") << endl;
	
		   // moj strzal - pokazuje plansze komputera
		if (indGracza == 0)
		{		        
			Player * przeciwnik = gracze[1 - indGracza];
			cout << "Plansza przeciwnika (H=trafienie, M=pudlo):" << endl;
			for (int y = 0; y < Player::size; ++y) 
			{
				for (int x = 0; x < Player::size; ++x) 
				{
					char c = przeciwnik->plansza[x][y];
					cout << ((c == 'H' || c == 'M') ? c : '.') << " ";
				
				}
				cout << endl;			
			}		
		}
		else  //strzal komputera - pokazuje moja plansze
		{
			Player* ja = gracze[1 - indGracza];
			cout << "Twoja plansza (H=trafienie komputera, M=pudlo komputera):" << endl;
			for (int y = 0; y < Player::size; ++y) 
			{
				for (int x = 0; x < Player::size; ++x) 
				{
					char c = ja->plansza[x][y];
					               // je¿eli statek ? '*', je¿eli hit/miss ? H/M, wpp '.'
						if (c == 'S')        cout << "* ";
						else if (c == 'H')   cout << "H ";
						else if (c == 'M')   cout << "M ";
						else                 cout << ". ";
					
				}
				cout << endl;
				
			}
		
		}
    
}


