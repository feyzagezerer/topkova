#pragma once
#ifndef DUGUM_HPP
#define DUGUM_HPP

#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class Dugum {

public:
	string kelime;
	string *next;
	string *prev;
	Dugum(const string& kelime, string* next = NULL, string* prev = NULL);
	~Dugum();

};



#endif