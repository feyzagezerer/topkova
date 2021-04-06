/**        
* @file  B151210046_Odev1  
* @description program kullanıcının girdiği kova sayısı kadar renkli kova oluşturup 
* içerisine bir top koyabiliyor, kovaların ve topların yerini değiştirebiliyor, kovaları ve topları tersten yerleştirebiliyor
* @course  1B  
* @assignment  1   
* @date  14.10.2019-3.11.2019 
* @author  Feyza GEZERER feyza.gezerer@ogr.sakarya.edu.tr   
*/
#include "KovaKontrol.hpp"
#include "windows.h"
#include <time.h>
#include <string>
KovaKontrol::KovaKontrol(int kovaSayisi)
{
	this->kovaSayisi = kovaSayisi;
	this->kovalar = new Kova*[kovaSayisi];
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(0));
	int rr = rand();
	
	for (int i = 0; i < kovaSayisi;i++) {
		Kova* k = new Kova(rr + i);
		kovalar[i] = k;
	}
}
void KovaKontrol::toplariYerlestir() {
	bool topEklendiMi = false;
	srand(time(0));
	int rr = rand();
	for (int i = 0; i < kovaSayisi ; i++ ) {
		Kova* tempKova = kovalar[i];
		topEklendiMi =  tempKova->topEkle(rr + i);
		
	}
	if (topEklendiMi) {
		std::cout << "Toplar eklendi.." << std::endl;
	}
	else {
		std::cout << "Zaten top var.." << std::endl;
	}
}

void KovaKontrol::toplariYoket() {
	bool yokEdildiMi = false;
	for (int i = 0; i < kovaSayisi; i++) {
		Kova* tempKova = kovalar[i];
		yokEdildiMi = tempKova->topuYokEt();
		
	}
	if (yokEdildiMi) {
		std::cout << "Toplar yok edildi.." << std::endl;
	}
	else {
		std::cout << "Zaten top yok.." << std::endl;
	}
	
}

void KovaKontrol::kovaDegistir(int a,int b) {

	Kova* kova1 = kovalar[a - 1];
	Kova* kova2 = kovalar[b - 1];

	kovalar[a - 1] = kova2;
	kovalar[b - 1] = kova1;
}

void KovaKontrol::topDegistir(int a, int b) {

	Top* top1 = kovalar[a - 1]->getTop();
	Top* top2 = kovalar[b - 1]->getTop();

	kovalar[a - 1]->setTop(top2);
	kovalar[b - 1]->setTop(top1);
}

void KovaKontrol::toplariTerstenYerlestir() {

	for (int i = 0, j = kovaSayisi - 1; i < kovaSayisi / 2; i++,j--) {
		topDegistir(i + 1, j + 1);
	}
}

void KovaKontrol::kovalariTerstenYerlestir() {
	for (int i = 0, j = kovaSayisi - 1; i < kovaSayisi / 2; i++, j--) {
		kovaDegistir(i + 1, j + 1);
	}
}

void KovaKontrol::yazdir() 
{
	for (int i = 0; i < kovaSayisi; i++) {
		Kova* k = kovalar[i];
		SetConsoleTextAttribute(hConsole, 7);
		std::cout << i + 1 << ". Kova" << std::endl;
		SetConsoleTextAttribute(hConsole, k->getRenk());
		if (k->doluMu)
		{
			std::cout << doluKovaHeader << k->getTop()->getAd() << doluKovaTailer << std::endl;
			std::cout << "Kova adresi : " << &(*k) << std::endl;
			std::cout << "Top adresi : " << &(*k->getTop()) << std::endl;
		}
		else {
			std::cout << bosKova << std::endl;
			std::cout << "Kova adresi : " << &(*k) << std::endl;
			std::cout << "Top adresi : NULL" << std::endl;

		}
		std::cout << std::endl;
	}
	SetConsoleTextAttribute(hConsole, 7);
}