#include"Vozilo.h"
int main() {
	double x,x2;
	bool pom=false;
	string xx;
	Put p;
	p=Put();
	Tacka t1(3,5);
	Tacka t2(-2, 4);
	//pom = t1 == t2;
	//cout << pom<<endl;
	p += t1;
	p += t2;
	x = p.DuzinaPuta(p);
	cout << x<<endl;
	cout << p<<endl;
	/*cin >> xx;
	Vozilo v(xx);
	x2=v.CenaPrevoza(v, p);
	cout << x2 << endl;
	cout << v << endl;*/
	return 0;
}