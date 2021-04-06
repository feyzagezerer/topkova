#pragma once
#ifndef DOSYAOKU_HPP
#define DOSYAOKU_HPP

#include <string>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;
class DosyaOku {
private:
	string path;
public:
	DosyaOku(const string path = "icerik.txt");
	string dosyaOkuma();
	~DosyaOku();
};
#endif