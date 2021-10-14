#include "KarticnoPlacanje.h"
#include "Datum.h"

void KarticnoPlacanje::setBrojKartice(std::string br){
	this->brojKartice=br;
}

void KarticnoPlacanje::setVrsta(int x){
	this->vrsta=Vrsta(x);
}

std::string KarticnoPlacanje::getBrojKartice(){
	return this->brojKartice;
}

Vrsta KarticnoPlacanje::getVrsta(){
	return this->vrsta;
}

void KarticnoPlacanje::plati(){
	std::cout << "Placeno karticom!";
}

std::istream& operator >> (std::istream& unos, KarticnoPlacanje& kp){
	std::string brk;
	do{
		std::cout << "Unesite broj kartice: ";
		unos >> brk;
	}while(brk.size()<16);
	kp.setBrojKartice(brk);
	int v;
	std::cout << "Unesite vrstu karice (VISA=1, MASTERCARD=2, MAESTRO=3)";
	unos >> v;
	unos.ignore();
	kp.setVrsta(v);
	int d, m, g;
	std::cout << "Unesite datum:";
	std::cout << "\nUnesite dan: ";
	unos >> d;
	kp.getDatumPlacanja().setDan(d);
	std::cout << "Unesite mjesec:";
	unos>>m;
	kp.getDatumPlacanja().setMjesec(m);
	std::cout << "unesite godinu: ";
	unos>>g;
	kp.getDatumPlacanja().setGodina(g);
	return unos;
}
