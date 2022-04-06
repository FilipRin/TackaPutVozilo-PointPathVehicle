#include"Vozilo.h"
Vozilo::Vozilo(string naziv)
{
	model=model+naziv;
}

double Vozilo::CenaPrevoza(Vozilo& v, Put& p)
{
	double c = 0;
	c = 120 + p.DuzinaPuta(p)*0.1;
	return c;
}

ostream& operator<<(ostream& it, Vozilo& v)
{
	cout << v.model << endl;
	// TODO: insert return statement here
	return it;
}
