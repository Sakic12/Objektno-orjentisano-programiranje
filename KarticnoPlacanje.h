#ifndef KARTICNOPLACANJE_H
#define KARTICNOPLACANJE_H
#include <iostream>
#include <string>
#include "Datum.h"

#include "Placanje.h"

enum Vrsta{VISA=1, MASTERCARD, MAESTRO};

class KarticnoPlacanje : public Placanje
{
	private:
		std::string brojKartice;
		Vrsta vrsta;
	public:
		void setBrojKartice(std::string brojKartice);
		std::string getBrojKartice();
		void setVrsta(int x);
		Vrsta getVrsta();
		void plati();
		friend std::istream& operator >> (std::istream& unos, KarticnoPlacanje& kp);
};

#endif
