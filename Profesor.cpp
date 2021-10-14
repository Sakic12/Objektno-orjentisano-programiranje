#include "Profesor.h"
#include <iostream>

Profesor::Profesor()
{
}

Profesor::~Profesor()
{
}

void Profesor::setZvanje(int z){
	this->zvanje=Zvanje(z); // postavljanje enum za zvanje profesora
}

Zvanje Profesor::getZvanje(){
	return this->zvanje;
}

void Profesor::unos(){
	std::string u;
	std::cout << "Unesite ime profesora: ";
	std::getline(std::cin, u);
	this->setIme(u);
	std::cout << "Unesite prezime profesora: ";
	std::getline(std::cin, u);
	this->setPrezime(u);
	int n;
	std::cout << "Unesite zvanje profesora (docent=1, vandredni=2, redovni=3): ";
	std::cin>>n;
	std::cin.ignore();
	this->setZvanje(n);
}

void Profesor::ispis(){
	std:: cout << this->getPrezime() << "\t\t" << this->getIme() << "\t\t" ;
	switch(this->getZvanje()){
		case docent:
			std::cout << "Docent";
			break;
		case vandredni:
			std::cout << "Vandredni";
			break;
		case redovni:
			std::cout << "Redovni";
			break;
		default:
			std::cout << "Pogresan izbor!";
	}
}
