#ifndef _Z
#define _Z

class Zasoby
{
	protected:
	int maka;
	int cukier;
	int owoce;
	int zloto;
	
	public:
	Zasoby();
	~Zasoby();
	void kup();
	void get_zasoby();
	void set_maka(int);
	void set_cukier(int);
	void set_owoce(int);
	void set_zloto(int);

	int get_maka();
	int get_cukier();
	int get_owoce();
	int get_zloto();
};

#endif
