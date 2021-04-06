#pragma once
#ifndef KOVAKONTROL_HPP
#define KOVAKONTROL_HPP
#include "Kova.hpp"
#include <iostream>
#include <windows.h>

using namespace std;
class KovaKontrol{

public:
	KovaKontrol(int kovaSayisi);
	void toplariYerlestir();
	void toplariYoket();
	void kovaDegistir(int kova1, int kova2);
	void topDegistir(int top1,int top2);
	void kovalariTerstenYerlestir();
	void toplariTerstenYerlestir();
	void yazdir();

private:
	HANDLE  hConsole;
	Kova** kovalar;
	int kovaSayisi = 0;
	std::string bosKova = "   .|.   \n  .   . \n .     . \n #     # \n #  -  # \n #     # \n #######";
	std::string doluKovaHeader = "   .|.  \n  .   . \n .     . \n #     # \n #  ";
	std::string doluKovaTailer = "  # \n #     # \n #######";
};


#endif