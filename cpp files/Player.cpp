#include <cstdlib>
#include "Player.h"

Player::Player() 
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			plansza[i][j] = '.';
		}
	}
}

Player::~Player() {}

bool Player::przyjmijStrzal(const Position& poz)
{
	int x = poz.x;
	int y = poz.y;
	if (plansza[x][y] == 'S')
	{
		plansza[x][y] = 'H';
		for (Ship& ship : ships) //dla kazdego statka w tablicy wekt ships wykonaj iteracje tej petli
		{
			if (ship.Trafienie(poz))
			{
				break;
			}
		}
		return true;
	}
	else
	{
		plansza[x][y] = 'M';
		return false;
	}
}

bool Player::ustawStatek(const Ship& ship)
{
	bool poziomy = ship.czyPoziomy();
	int y = ship.getPoz().y;
	int x = ship.getPoz().x;
	int dl = ship.getDlugosc();

	for (int i = 0; i < dl; ++i)
	{
		int xi = x + (poziomy ? i : 0);
		int yi = y + (poziomy ? 0 : i);

		if (xi < 0 || xi >= size || yi < 0 || yi >= size || plansza[xi][yi] == 'S')
		{
			return false;
		}
	}

	for (int i = 0; i < dl; ++i)
	{
		int xi = x + (poziomy ? i : 0);
		int yi = y + (poziomy ? 0 : i);
		plansza[xi][yi] = 'S';
	}
	ships.push_back(ship);
	
	return true;
}

bool Player::wszStatkiZatonely() const
{
	for (const Ship& ship : ships)
	{
		if (!ship.CzyZatopiony())
		{
			return false;
		}

	}
	return true;
}