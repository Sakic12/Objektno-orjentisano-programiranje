#include "Knjiga.h"

Knjiga::Knjiga(std::string n, std::string a, int g, int brs){
	this->naziv=n;
	this->autor=a;
	this->godina=g;
	this->brStranica=brs;
}

Knjiga::Knjiga(){
}

Knjiga::~Knjiga(){
}

void Knjiga::setNaziv(std::string n){
	this->naziv=n;
}

void Knjiga::setAutor(std::string a){
	this->autor=a;
}

void Knjiga::setGodina(int g){
	this->godina=g;
}

void Knjiga::setBrStraniac(int brs){
	this->brStranica=brs;
}

std::string Knjiga::getAutor(){
	return this->autor;
}

std::string Knjiga::getNaziv(){
	return this->naziv;
}

int Knjiga::getGodina(){
	return this->godina;
}

int Knjiga::getBrStranica(){
	return this->brStranica;
}

