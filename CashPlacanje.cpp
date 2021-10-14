#include "CashPlacanje.h"
#include <iostream>

void CashPlacanje::setVrstaNovca(int x){
	this->vrstan=VrstaNovca(x);
}

VrstaNovca CashPlacanje::getVrsta(){
	return this->vrstan;
}

void CashPlacanje::plati(){
	std::cout << "Placeno novcem!";
}
