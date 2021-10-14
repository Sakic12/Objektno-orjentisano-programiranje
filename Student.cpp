#include "Student.h"
#include <iostream>
Student::Student()
{
}

Student::~Student()
{
}

void Student::setbrIndexa(int br){
	this->brIndeksa=br;
}

int Student::getbrIndexa(){
	return this->brIndeksa;
}

std::istream& operator>>(std::istream& unos, Student& stud){
	std::string s;
	std::cout << "Unesite ime studenta: ";
	std::getline(unos, s);
	stud.setIme(s);
	std::cout << "Unesite prezime studenta: ";
	std::getline(unos, s);
	stud.setPrezime(s);
	int b;
	std::cout << "Unesite broj indeksa studenta: ";
	unos>>b;
	unos.ignore();
	stud.setbrIndexa(b);
	return unos;
}

void Student::ispis(){
	std::cout << this->getPrezime() << "\t\t" << this->getIme() << "\t\t" << this->getbrIndexa();
}
