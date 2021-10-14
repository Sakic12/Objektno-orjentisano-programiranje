#include "Ispit.h"
#include "Profesor.h"
#include <iostream>

Ispit::Ispit()
{
}

Ispit::~Ispit()
{
}

void Ispit::setNaziv(std::string n){
	this->naziv=n;
}

void Ispit::setDatum(std::string d){
	this->datumIspita=d;
}

void Ispit::setOcjena(int o){
	this->ocjene.push_back(o);
}

std::string Ispit::getNaziv(){
	return this->naziv;
}

std::string Ispit::getDatum(){
	return this->datumIspita;
}

std::vector <int> Ispit::getOcjena(){
	return this->ocjene;
}

void Ispit::setStudent(Student studenta){
	this->studenta.push_back(studenta);
}

std::vector <Student> Ispit::getStudent(){
	return this->studenta;
}

double Ispit::operator!(){
	int suma=0;
	for (int i=0; i<this->getOcjena().size(); i++){
		suma+=this->getOcjena()[i];
	}
	return suma/this->getOcjena().size();
}

std::istream& operator>>(std::istream& unos, Ispit& isp){
	isp.profesor.unos();
	std::string i;
	std::cout << "Unesite datum ispita:";
	std::getline(unos, i);
	isp.setDatum(i);
	std::cout << "Unesite naziv predmeta: ";
	std::getline(unos, i);
	isp.setNaziv(i);
	return unos;
}

void Ispit::ispis(){
	std:: cout << this->getNaziv() << "\t" << this->getDatum() << "\t";
	this->profesor.ispis();
	std::cout << std::endl;
}


