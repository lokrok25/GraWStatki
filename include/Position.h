#pragma once

struct Position {
	int x;
	int y;
	bool operator==(const Position& poz) const//pozwala na bezposrednie porownywanie pozycji statkw
	{
		return x == poz.x && y == poz.y;
	}
};
