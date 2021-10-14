#include "Kupac.h"
#include <iostream>

Kupac::Kupac()
{
}

void Kupac::setIme(std::string i){
	this->ime=i;
}

void Kupac::setPrezime(std::string p){
	this->prezime=p;
}

void Kupac::setID(int id){
	this->id=id;
}

std::string Kupac::getIme(){
	return this->ime;
}

std::string Kupac::getPrezime(){
	return this->prezime;
}

int Kupac::getID(){
	return this->id;
}

void Kupac::setPlacanje(){
	Placanje placanja;
	int p;
	std::cout << "Unesite iznos koji zelite da plataite: ";
	std::cin>>p;
	placanja.setIznos(p);
	int d, m, g;
	Datum datuma;
	std::cout << "Unesite dan: ";
	std::cin>>d;
	datuma.setDan(d);
	std::cout << "Unesite mjesec:";
	std::cin >> m;
	datuma.setMjesec(m);
	std::cout << "Unesite godinu: ";
	std::cin>>g;
	datuma.setGodina(g);
	std::cin.ignore();
	placanja.setDatumPlacanja(datuma);
	this->getPlacanje().push_back(placanja);
}

std::vector <Placanje> Kupac::getPlacanje(){
	return this->placanja;
}

void Kupac::operator!(){
	int suma=0;
	for (int i=0; i<this->getPlacanje().size(); i++){
		suma+=this->getPlacanje()[i].getIznos();
	}
	std::cout << "Ukupna suma placanja je" << suma;
}

void Kupac::unosKupca(){
	std::string i,p;
	std::cout << "Unesite ime kupca: ";
	std::getline(std::cin, i);
	this->setIme(i);
	std::cout << "Unesite prezime kupca: ";
	std::getline(std::cin, p);
	this->setPrezime(p);
	int id;
	std::cout << "Unesite id kupca: ";
	std::cin>>id;
	std::cin.ignore();
	this->setID(id);
}


