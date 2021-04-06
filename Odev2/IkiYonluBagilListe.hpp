#pragma once
#ifndef IKIYONLUBAGILLISTE_HPP
#define IKIYONLUBAGILLISTE_HPP

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "Dugum.hpp"
#include "DosyaOku.hpp"
#include <string.h>
#include <string>
using namespace std;
class IkiYonluBagilListe {


private:
	string *ilk;
	string *son;
	IkiYonluBagilListe** kacinci;
	void listeyiDoldur();
	void ekle(const string& kelime);

public:
	IkiYonluBagilListe();
	void yazdir();
	~IkiYonluBagilListe();
};
#endif