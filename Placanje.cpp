#include "Placanje.h"

Placanje::Placanje(){
}

void Placanje::setIznos(int i){
	this->iznos=i;
}

int Placanje::getIznos(){
	return this->iznos;
}

void Placanje::setDatumPlacanja(Datum dat){
	this->datumPlacanja=dat;
}

Datum Placanje::getDatumPlacanja(){
	return this->datumPlacanja;
}


