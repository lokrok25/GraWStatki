#include "cstdlib"
#include "Computer.h"

Computer::Computer()
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			sprPola[i][j] = false;
		}
	}
}

void Computer::ustawStatki()
{
	int dlStatkow[] = { 5,4,3,3,2 };
	for (int dlugosc : dlStatkow) //iteruje dla kazdej dlugosci
	{
		bool ustawiony = false;
		while (!ustawiony)
		{
			int x = rand() % size;
			int y = rand() % size;
			bool czyPoziomy = rand() % 2;
			ustawiony = ustawStatek(Ship(dlugosc, { x,y }, czyPoziomy)); //zwraca true jesli udalop sie ustawic
		}
	}
}

Position Computer::twojRuch()
{
	Position poz;
	do
	{
		poz.x = rand() % size;
		poz.y = rand() % size;
	} while (sprPola[poz.x][poz.y]); //losuje wspolrzedne punktu do trafienia póki nie zostanie wylosowany punkt z false (jeszcze nie trafiony)
	sprPola[poz.x][poz.y] = true;
	return poz;

	
}