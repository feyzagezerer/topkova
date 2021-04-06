/**        
* @file  B151210046_Odev1  
* @description program kullanıcının girdiği kova sayısı kadar renkli kova oluşturup 
* içerisine bir top koyabiliyor, kovaların ve topların yerini değiştirebiliyor, kovaları ve topları tersten yerleştirebiliyor
* @course  1B  
* @assignment  1   
* @date  14.10.2019-3.11.2019 
* @author  Feyza GEZERER feyza.gezerer@ogr.sakarya.edu.tr   
*/
#include "Kova.hpp"

Kova::Kova(int renk) {
	this->renk = (renk % 6) + 1;
}

Kova::~Kova() {
	delete top;
}

int Kova::getRenk() 
{
	return this->renk;
}

bool Kova::topEkle(int topAdi) {
	if (!doluMu) {
		this->top = new Top();
		int i = (topAdi % 26) + 65;
		this->top->setAd(static_cast<char>(i));
		doluMu = true;
		return true;
	}
	return false;
}
bool Kova::topuYokEt() {
	if (this->top) {
		delete this->top;
		this->top = NULL;
		doluMu = false;
		return true;
	}
	return false;
}

Top* Kova::getTop() 
{
	return this->top;
}

void Kova::setTop(Top* top)
{
	this->top = top;
}