#include "Datum.h"
#include <iostream>

Datum::Datum(){
}

void Datum::setDan(int dan){
	switch(this->mjesec){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			do{
				std::cout << "Unesite dan: ";
				std::cin >> this->dan;
				std::cin.ignore();
			}while(dan<1 || dan>31);
			break;
			
		case 4: case 6: case 9: case 11:
			do{
				std::cout << "Unesite dan: ";
				std::cin >> this->dan;
				std::cin.ignore();
				
			}while(dan<1 || dan>30);
			break;
			
		case 2:
			if(this->godina%4==0){
				do{
				std::cout << "Unesite dan: ";
				std::cin >> this->dan;
				std::cin.ignore();
				
			}while(dan<1 || dan>29);
			}else{
			do{
				std::cout << "Unesite dan: ";
				std::cin >> this->dan;
				std::cin.ignore();
			}while(dan<1 || dan>28);
			}
			break;
			default:
				std::cout << "Pogresan unos!";
}
}

void Datum::setMjesec(int mjesec){
	do{
		std::cout << "Unesite mjesec: ";
		std::cin >> this->mjesec;
		std::cin.ignore();
	}while (mjesec<1 || mjesec>12);
}

void Datum::setGodina(int godina){
	do{
		std::cout << "Unesite godinu: ";
		std::cin >> this->godina;
		std::cin.ignore();
	}while (this->godina<1900);
}

int Datum::getDan(){
	return this->dan;
}

int Datum::getMjesec(){
	return this->mjesec;
}

int Datum::getGodina(){
	return this->godina;
}

Datum::Datum(int d, int m, int g)
{
	this->dan=d;
	this->mjesec=m;
	this->godina=g;
}


