#pragma once
#ifndef TOP_HPP
#define TOP_HPP

#include <iostream>

using namespace std;
class Top {

public:
	Top();
	std::string adress;
	void adresYazdir();
	void setAd(char ad);
	char getAd();
private:
	char ad = '-';
};


#endif