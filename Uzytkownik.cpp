#include <iostream>
#include "Uzytkownik.h"

using namespace std;

Uzytkownik::Uzytkownik()
	:Zasoby()
{
	nazwa="user";
	poziom=1;
	pd=0;
}

Uzytkownik::~Uzytkownik()
{
}

void Uzytkownik::wyswietl()
{
	cout << nazwa << endl;
	cout << "Poziom: " << poziom << endl;
	cout << "PD: " << pd << endl;
	Zasoby::get_zasoby();
}

void Uzytkownik::set_pd(int p)
{
	pd = p;
}

int Uzytkownik::get_pd()
{
	return pd;
}
