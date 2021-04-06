#include <string>
#include <fstream>
#include "DosyaOku.hpp"
#include <string.h>

//dosyayi okuyup okunan satiri doner
using namespace std;

	DosyaOku:: DosyaOku(const string path = "icerik.txt") {
		this->path = path;
	}
	string DosyaOku ::  dosyaOkuma() {
		ifstream strReader(path);
		string line;
		getline(strReader, line);
		return line;
	}
	DosyaOku:: ~DosyaOku() {

	}