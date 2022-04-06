#include"Tacka.h"
#include<iostream>
#include<vector>
using namespace std;
#pragma once
#ifndef _PUT_H_
#define _PUT_H_
class Put {

	vector<Tacka> list;

public:
	Put();
	~Put() {
		list.empty();
	}
	friend Put& operator+=(Put& p, Tacka& t);
	double DuzinaPuta(Put& p);
	friend ostream& operator<<(ostream& it, Put& p);
};
#endif//!_PUT_H