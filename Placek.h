#ifndef _P
#define _P
#include <iostream>
#include "Uzytkownik.h"

class Placek
	:public Uzytkownik
{
	protected:
	std::string nazwa;
	int ilosc;
	
	public:
	Placek();
	~Placek();
	void upiecz(Uzytkownik&);
};

#endif
