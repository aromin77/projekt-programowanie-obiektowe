#ifndef _U
#define _U
#include <iostream>
#include "Zasoby.h"

class Uzytkownik 
	:public Zasoby
{
	protected:
	std::string nazwa;
	int poziom;
	int pd;

	public:
	Uzytkownik();
	~Uzytkownik();
	void wyswietl();
	
	void set_pd(int);
	int get_pd();
};	
	
#endif
