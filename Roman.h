#ifndef ROMAN_H
#define ROMAN_H

#include "Knjiga.h"

enum Vrsta{krimi=1, ljubavni, komedija};

class Roman : public Knjiga
{
	private:
		Vrsta vrsta;
		double cijena;
	public:
		void setCijena(double cijena);
		void setVrsta(int x);
		Vrsta getVrsta();
		double getCijena();
		void unos();
		void ispis();
		double operator!();
};

#endif
