/**        

* @description program kullanıcının girdiği kova sayısı kadar renkli kova oluşturup 
* içerisine bir top koyabiliyor, kovaların ve topların yerini değiştirebiliyor, kovaları ve topları tersten yerleştirebiliyor

*/
#include "KovaKontrol.hpp"

#include <iostream>
using namespace std;
int main()
{
	

	int secim;
	int kovaSayisi;
	int kova1 = -1, kova2 = -1, top1 = -1, top2 = -1;
	cout << "Kova Sayisi:" << endl;
	cin >> kovaSayisi;
	KovaKontrol* kovaKontrol = new KovaKontrol(kovaSayisi);
	kovaKontrol->yazdir();
	
	do {
		kova1 = -1; kova2 = -1; top1 = -1; top2 = -1;
		cout << "[1] Toplari Yerlestir \n[2] Toplari Yoket \n[3] Kova Degistir \n[4] Top Degistir \n[5] Kovalari Tersten Yerlestir \n[6] Toplari Tersten Yerlestir \n[7] Cikis \n";
		cout << ">>";
		cin >> secim;
		switch (secim)
		{
		case 1:
			kovaKontrol->toplariYerlestir();
			kovaKontrol->yazdir();
			break;
		case 2:
			kovaKontrol->toplariYoket();
			kovaKontrol->yazdir();
			break;
		case 3:
			cout << "Hangi kova : ";
			cin >> kova1;
			cout << "Hangi kova ile :";
			cin >> kova2;
			if (kova1 > 0 && kova2 > 0) {
				if (kova1 <= kovaSayisi && kova2 <= kovaSayisi) {
					kovaKontrol->kovaDegistir(kova1, kova2);
					kovaKontrol->yazdir();
				}
				else {
					cout << "Kova sayisindan daha buyuk bir sayi giremezsiniz." << endl;
				}
			}
			else {
				cout << "Girilen sayi 0'dan buyuk olmali"<<endl;
			}
			break;
		case 4:
			cout << "Hangi top : ";
			cin >> top1;
			cout << "Hangi top ile :";
			cin >> top2;
			if (top1 > 0 && top2 > 0) {
				if (top1 <= kovaSayisi && top2 <= kovaSayisi) {
					kovaKontrol->topDegistir(top1, top2);
					kovaKontrol->yazdir();
				}
				else {
					cout << "Kova sayisindan daha buyuk bir sayi giremezsiniz." << endl;
				}
			}
			else {
				cout << "Girilen sayi 0'dan buyuk olmali" << endl;
			}
			break;
		case 5:
			kovaKontrol->kovalariTerstenYerlestir();
			kovaKontrol->yazdir();
			break;
		case 6:
			kovaKontrol->toplariTerstenYerlestir();
			kovaKontrol->yazdir();
			break;
		case 7:
			cout << "Cikis yapildi.\n";
			break;
		default:
			cout << "Hatali secim.";
			cin.get();
			cin.ignore();
			break;
		}
	} while (secim != 7);
}

