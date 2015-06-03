#include <iostream>
#include <cstdlib>
#include "Uzytkownik.h"
#include "Placek.h"

using namespace std;


int main()
{
	Uzytkownik user;
	Placek p1;
	int wybor;

	do
	{
		cout << endl;
		user.wyswietl();
		cout << "---------Menu---------" << endl;
		cout << "1. Upiecz placek i sprzedaj" << endl;
		cout << "2. Idz na bazar" << endl;
		cout << "3. Wyjdz" << endl;
		cout << "Wybor: ";
		cin >> wybor;
		system("clear");
		switch(wybor)
		{
			case 1: p1.upiecz(user);
			break;
		
			case 2: user.kup();
			break;
	
			case 3:
			break;	

			default:
			cout << "Zly wybor. Sprobuj jeszcze raz." << endl;
			break;
		}
	} while (wybor!=3);

	
	return (0);
}
