#include <iostream>
#include "Datum.h"
#include "Placanje.h"
#include "Kupac.h"
#include "KarticnoPlacanje.h"
#include "CashPlacanje.h"
#include <vector>

std::vector <Kupac> kupci;


int main(){
	
	int izbor;
	do{
		do{
			system ("cls");
			std::cout << "1. Unos kupca";
			std::cout << "2. Unos placanja";
			std::cout << "3.Ukupan iznos placanja po kupcu";
			std::cout << "\tIzbor:";
			std::cin >> izbor;
			std::cin.ignore();
			if(izbor==1){
				system("cls");
				Kupac kupac;
				kupac.unosKupca();
				kupci.push_back(kupac);
				system("pause");
			}
		}while(izbor!=3);
	}while(izbor<1 || izbor>3);
	
	return 0;
}
