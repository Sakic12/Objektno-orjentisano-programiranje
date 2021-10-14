#ifndef OSOBA_H
#define OSOBA_H
#include <string>

class Osoba
{
	private:
		std::string ime, prezime;
	public:
	void setIme(std::string ime);
	void setPrezime(std::string prezime);
	std::string getIme();
	std::string getPrezime();
	virtual void ispis()=0; 
	Osoba ();
	~Osoba();
};

#endif
