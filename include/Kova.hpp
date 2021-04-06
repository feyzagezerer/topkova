#pragma once
#ifndef KOVA_HPP
#define KOVA_HPP
#include "Top.hpp"
#include <iostream>
#include <string.h>

using namespace std;
class Kova {
private:
	int renk;
	Top* top;
	
public:
	Kova(int renk);
	~Kova();
	int getRenk();
	bool topEkle(int topAdi);
	bool topuYokEt();
	Top* getTop();
	void setTop(Top* top);
	bool doluMu = false;
};


#endif