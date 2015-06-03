#include <iostream>
#include "Placek.h"

using namespace std;

Placek::Placek()
{
	nazwa = "placek";
	maka = 3;
	cukier = 3;
	owoce = 3;
	pd = 10;
	zloto = 30;
}

Placek::~Placek()
{
}

void Placek::upiecz(Uzytkownik &u)
{
	if((u.get_maka()>=maka) && (u.get_cukier()>=cukier) && (u.get_owoce()>=owoce))
	{	
		u.set_cukier(u.get_cukier()-cukier);
		u.set_owoce(u.get_owoce()-owoce);
		u.set_pd(u.get_pd()+pd);
		u.set_zloto(u.get_zloto()+zloto);
		cout << "Upieczono: " << nazwa << " Dostajesz " << zloto << "zlota i " << pd << " PD" << endl;
	}
	else
	{
		cout << "Masz za malo skladnikow" << endl;
	}
}
	
