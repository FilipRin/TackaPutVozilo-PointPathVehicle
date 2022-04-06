#include "Put.h"

Put::Put()
{
}

double Put::DuzinaPuta(Put& p)
{
	int i = 0;
	double d = 0;
	while ( i < p.list.size()-1) {
		d = d+ p.list[i].Rastojanje2Tacke(p.list[i+1]);
		i++;
	}
	return d;
}

Put& operator+=(Put& p, Tacka& t)
{
	p.list.push_back(t);
	return p;
	// TODO: insert return statement here
}

ostream& operator<<(ostream& it, Put& p)
{
	for (int i = 0; i < p.list.size(); i++) {
		cout << p.list[i]<<endl;
	}
	return it;
	// TODO: insert return statement here
}
