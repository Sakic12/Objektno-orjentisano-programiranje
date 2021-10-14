#include "Roman.h"
#include <iostream>

void Roman::setCijena(double c){
	this->cijena=c;
}

double Roman::getCijena(){
	return this->cijena;
}

void Roman::setVrsta(int x){
	this->vrsta=Vrsta(x);
}

Vrsta Roman::getVrsta(){
	return this->vrsta;
}

void Roman::unos(){
	std::string u;
	std::cout << "Unesite naziv knjige: ";
	std::getline(std::cin, u);
	this->setNaziv(u);
	std::cout <<"Unesite autora knjige: ";
	std::getline(std::cin, u);
	this->setAutor(u);
	int n;
	std::cout << "Unesite godinu izdavanja: ";
	std::cin>>n;
	std::cin.ignore();
	this->setGodina(n);
	std::cout << "Unesite broj stranica knjige:";
	std::cin>>n;
	std::cin.ignore();
	this->setBrStraniac(n);
	std::cout << "Unesite vrstu knjige (krimi=1; ljubavni=2; komedija=3): ";
	std::cin >>n;
	this->setVrsta(n);
	std::cout <<"Unesite cijenu romana: ";
	std::cin>>n;
	this->setCijena(n);
	std::cin.ignore();
}

void Roman::ispis(){
	std::cout << this->getNaziv() << "\t\t" << this->getAutor() << "\t\t" << this->getGodina() << "\t\t" << this->getBrStranica() << "\t\t";
		switch(this->getVrsta()){
		case krimi:
			std::cout << "Krimi";
			break;
		case ljubavni:
			std::cout << "Ljubavni";
			break;
		case komedija:
			std::cout << "Komedija";
			break;
		default:
			std::cout << "Pogresan izbor!";
	}
	std::cout << "\t\t" << !*this<< std::endl;

}
double Roman::operator!(){
	if(2021-this->getGodina()>20){
		this->cijena-=cijena*0.17;
		return this->getCijena();
	}else {
		return this->getCijena();
	}
}


