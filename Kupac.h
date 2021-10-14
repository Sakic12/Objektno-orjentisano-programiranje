#ifndef KUPAC_H
#define KUPAC_H
#include <string>
#include <vector>
#include "Placanje.h"
#include "Datum.h"

class Kupac
{
	private:
		std::string ime, prezime;
		int id;
		
	public:
		std::vector <Placanje> placanja;
		void setIme(std::string ime);
		void setPrezime(std::string prezime);
		void setPlacanje();
		void setID(int id);
		std::string getIme();
		std::string getPrezime();
		int getID();
		std::vector <Placanje> getPlacanje();
		void dodajPlacanje();
		void operator!();
		Kupac();
		~Kupac(){};
		void unosKupca();
};

#endif
