#include "Udzbenik.h"

Udzbenik::Udzbenik(){
}

Udzbenik::~Udzbenik(){
}

void Udzbenik::setRazred(int r){
	this->razred=r;
}

int Udzbenik::getRazred(){
	return this->razred;
}

std::ostream& operator << (std::ostream& ispis, Udzbenik& udz){
	ispis << udz.getNaziv() << "\t\t" << udz.getAutor() << "\t\t" << udz.getGodina() << "\t\t" << udz.getBrStranica() << "\t\t" << udz.getRazred() << std::endl;
	return ispis;
}

std::istream& operator >>(std::istream& unos, Udzbenik& udz){
	std::string u;
	std::cout << "Unesite naziv udzbenika: ";
	std::getline(unos, u);
	udz.setNaziv(u);
	std::cout << "Unesite autora: ";
	std::getline(unos, u);
	udz.setAutor(u);
	int g;
	std::cout << "Unesite godinu: ";
	unos >>g;
	unos.ignore();
	udz.setGodina(g);
	std::cout << "Unesite broj stranica: ";
	unos>>g;
	unos.ignore();
	udz.setBrStraniac(g);
	std::cout << "Unesite razred (1-9): ";
	unos>>g;
	unos.ignore();
	if (g<1 || g>9){
		throw "Greska!";
	}else {
		udz.setRazred(g);
	}
	return unos;
}
