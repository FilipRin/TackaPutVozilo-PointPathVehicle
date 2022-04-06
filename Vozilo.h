#include"Put.h"
#include<string>
#pragma once
#ifndef _VOZILO_H_
#define _VOZILO_H_

class Vozilo {
	string model="";

public:
	Vozilo(string naziv);
	double CenaPrevoza(Vozilo& v, Put& p);
	friend ostream& operator<<(ostream& it, Vozilo& v);
};

#endif//!_VOZILO_H