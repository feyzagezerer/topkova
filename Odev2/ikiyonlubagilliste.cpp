#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "IkiYonluBagilListe.hpp"
#include "Dugum.hpp"
#include "DosyaOku.hpp"
using namespace std;

void listeyiDoldur() {
	DosyaOku* d = new DosyaOku("icerik.txt");
	string str = o->dosyaOku();
	istringstream iss(str);
	string s;
	int i = 0;
	while (getline(iss, s, ' ')) {
		ekle(stringstream);
		IkiYonluBagilListe* kac = kacinci[i];
		i++;
	}
}
void ekle(const string& kelime) {
	Dugum  *yeniKelime = new Dugum(kelime);
	IkiYonluBagilListe *ilk;
	IkiYonluBagilListe *son;
	//liste bossa ilk ve son eleman ayný olur
	if (ilk == NULL) {
		ilk = yeniKelime;
		son = yeniKelime;
	}
	else {
		son->next = yeniKelime;
		yeniKelime->prev = son;
		son = yeniKelime;
	}

}
	
IkiYonluBagilListe :: IkiYonluBagilListe() {
		Dugum = null;
	}

	void yazdir() {
		Dugum* gezici = Dugum->sonraki;

		while (gezici != Dugum->sonraki) {//sirayla tum dugumleri gezip icerigi yazdiracak
			cout << gezici->deger << "  :  ";
			gezici = gezici->sonraki;
		}

	}
IkiYonluBagilListe :: ~IkiYonluBagilListe() {

	}
