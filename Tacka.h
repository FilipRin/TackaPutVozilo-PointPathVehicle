#include<iostream>
#include<math.h>
using namespace std;
#pragma once
#ifndef _TACKA_H_
#define _TACKA_H_
class Tacka {

	int x;
	int y;

public:
	Tacka(int xx, int yy);
	bool operator==(Tacka& t1);
	friend ostream& operator<<(ostream& it, Tacka& t);
	double Rastojanje2Tacke(Tacka& t1);
};
#endif//!_TACKA_H