#include <iostream>
#include "../include/Human.h"
#include <fstream>
#include <cstdlib>

Human::Human(const string & initFile_):initFile(initFile_) {}

void Human::ustawStatki()
{
	ifstream file(initFile);


	if (!file)
	{
		cerr << "nie mozna otworzyc pliku" << initFile << endl;
		exit(1);
	}

	int dl, y, x;
	bool czyPoziomy;
	int licznik = 0;
	while (file >> dl >> x >> y >> czyPoziomy)
	{
		if (!ustawStatek(Ship(dl, { x-1,y-1 }, czyPoziomy))) //-1 tak jak w ruchu, po to by indeksowanie nie bylo bledne (indeksujemy koordynaty od 1 nie od 0)
		{
			cerr << "bledne ustawienie statku" << licznik + 1 << endl;
			exit(1);
		}
		++licznik;
	}
	if (licznik != 5)
	{
		cerr << "Zamiast 5 statkow postawiono " << licznik << endl;
		exit(1);
	}


}

Position Human::twojRuch()
{
	int x;
	int y;
	cout << "Wprowadz koordynaty twojego strzalu (x y): ";
	cin >> x >> y;
	return { x - 1,y - 1 }; //-1 po ty by przy strzale np w 2 2 nie trafiac w 3 3 (zle indeksowanie)
}