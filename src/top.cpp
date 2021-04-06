/**        
* @file  B151210046_Odev1  
* @description program kullanıcının girdiği kova sayısı kadar renkli kova oluşturup 
* içerisine bir top koyabiliyor, kovaların ve topların yerini değiştirebiliyor, kovaları ve topları tersten yerleştirebiliyor
* @course  1B  
* @assignment  1   
* @date  14.10.2019-3.11.2019 
* @author  Feyza GEZERER feyza.gezerer@ogr.sakarya.edu.tr   
*/
#include "Top.hpp"

Top::Top() {
	this->adress = "fklejrkew";
}

void Top::adresYazdir() {
	std::cout << this->adress;
}

void Top::setAd(char ad) 
{
	this->ad = ad;
}

char Top::getAd()
{
	return ad;
}
