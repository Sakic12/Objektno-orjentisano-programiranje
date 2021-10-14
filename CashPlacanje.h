#ifndef CASHPLACANJE_H
#define CASHPLACANJE_H

#include "Placanje.h"

enum VrstaNovca{novcanice=1, kovanice};

class CashPlacanje : public Placanje
{
	private:
		VrstaNovca vrstan;
	public:
		void setVrstaNovca(int x);
		VrstaNovca getVrsta();
		void plati();
};

#endif
