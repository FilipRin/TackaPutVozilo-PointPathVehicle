#include "Tacka.h"

Tacka::Tacka(int xx, int yy)
{
	x = xx;
	y = yy;
}

bool Tacka::operator==(Tacka& t1)
{
	if (x == t1.x && y == t1.y) {
		cout << "Jednake su tacke!" << endl;
		return true;
	}
	cout << "Tacke nisu jednake!" << endl;
	return false;
}

double Tacka::Rastojanje2Tacke(Tacka& t1)
{
	double d = 0;
	//int pom;
	
	
	d = sqrt(pow(t1.x - x, 2) + pow(t1.y - y, 2));
	return d;
}

ostream& operator<<(ostream& it, Tacka& t)
{
	cout << "(" << t.x << "," << t.y << ")" << endl;
	// TODO: insert return statement here
	return it;
}
