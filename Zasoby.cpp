#include "Zasoby.h"
#include <iostream>

using namespace std;

Zasoby::Zasoby()
{
	maka = 5;
	cukier = 10;
	owoce = 10;
	zloto = 10;
}

Zasoby::~Zasoby()
{
}

void Zasoby::kup()
{
	int wybor;
	int ile;
	cout << "Witaj! Cozesz sobie zyczysz?." 	<< endl;
	cout << "1. Chce make (cena 1zl)." 		<< endl;
	cout << "2. Chce cukier (cena 2zl)." 		<< endl;
	cout << "3. Chce owoce (cena 4zl)." 		<< endl;
	cout << "4. A wlasciwie to nic nie chce." 	<< endl;
	cout << "Wybierz: ";
	cin  >> wybor;

	switch(wybor)
	{
		case 1:
		cout << "Ile: ";
		cin >> ile;
		if (ile<=zloto)
		{
			maka+=ile;
			zloto-=ile;
			cout << "Swietny zakup. Kupiles " << ile << " maki" << endl;
		}
		else
		{
			cout << "Koles masz za malo mamony" << endl;
		}
		break;

		case 2:
		cout << "Ile: ";
		cin >> ile;
		if ((ile*2)<=zloto)
		{
			cukier+=ile;
			zloto-=(ile*2);
			cout << "Swietny zakup. Kupiles " << ile << " cukru" << endl;
		}
		else
		{
			cout << "Koles masz za malo mamony" << endl;
		}
		break;

		case 3:
		cout << "Ile: ";
		cin >> ile;
		if ((ile*4)<=zloto)
		{
			owoce+=ile;
			zloto-=(ile*4);
			cout << "Swietny zakup. Kupiles " << ile << " owocow" << endl;
		}
		else
		{
			cout << "Koles masz za malo mamony" << endl;
		}
		break;

		case 4:
		break;
		
		default:
		cout << "Zly wybor. Sprobuj jeszcze raz." << endl;
		break;
	}
}

void Zasoby::get_zasoby()
{
	cout << "Twoje zasoby:" << endl;
	cout << "Maka: " << maka << endl;
	cout << "Cukier: " << cukier << endl;
	cout << "Owoce: " << owoce << endl;
	cout << "Zloto: " << zloto << endl;
}

void Zasoby::set_maka(int m)
{
	maka = m;
}

void Zasoby::set_cukier(int c)
{
	cukier = c;
}

void Zasoby::set_owoce(int o)
{
	owoce = o;
}

void Zasoby::set_zloto(int z)
{
	zloto = z;
}

int Zasoby::get_maka()
{
	return maka;
}

int Zasoby::get_cukier()
{
	return cukier;
}

int Zasoby::get_owoce()
{
	return owoce;
}

int Zasoby::get_zloto()
{
	return zloto;
}

