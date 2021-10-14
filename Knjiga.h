#ifndef KNJIGA_H
#define KNJIGA_H
#include <iostream>

class Knjiga
{
	private:
		std::string naziv, autor;
		int godina, brStranica;
	public:
		Knjiga(std::string naziv, std::string autor, int godina, int BrStranica);
		void setNaziv(std::string naziv);
		void setAutor(std::string autor);
		void setGodina(int godina);
		void setBrStraniac(int brStranica);
		std::string getNaziv();
		std::string getAutor();
		int getGodina();
		int getBrStranica();
		Knjiga();
		~Knjiga();
};

#endif
