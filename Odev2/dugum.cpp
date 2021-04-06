#include <iostream>
#include <string.h>
#include <string>
#include "Dugum.hpp"
using namespace std;



	Dugum:: Dugum(const string& kelime, string *next = NULL, string *prev = NULL) {
		
		this -> kelime = kelime;
		this->next = next;
		this -> prev = prev;
	}
	Dugum::~Dugum() {

	}