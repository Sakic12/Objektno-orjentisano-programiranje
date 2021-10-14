#include "Osoba.h"
#include <iostream>

Osoba::Osoba(){
}

Osoba::~Osoba(){
}

void Osoba::setIme(std::string i){
	this->ime=i;
}

void Osoba::setPrezime(std::string p){
	this->prezime=p;
}

std::string Osoba::getIme(){
	return this->ime;
}

std::string Osoba::getPrezime(){
	return this->prezime;
}


