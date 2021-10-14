#ifndef PROFESOR_H
#define PROFESOR_H

#include "Osoba.h"

enum Zvanje{docent=1, vandredni, redovni};

class Profesor : public Osoba
{
	private:
		Zvanje zvanje;
	public:
		Profesor();
		~Profesor();
		void setZvanje(int x);
		Zvanje getZvanje();
		void unos();
		void ispis();

};

#endif
