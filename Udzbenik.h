#ifndef UDZBENIK_H
#define UDZBENIK_H
#include <iostream>

#include "Knjiga.h"

class Udzbenik : public Knjiga
{
	private:
		int razred;
	public:
		Udzbenik();
		void setRazred(int razred);
		int getRazred();
		~Udzbenik();
		friend std::ostream& operator << (std::ostream& ispis, Udzbenik& udz);
		friend std::istream& operator >>(std::istream& unos, Udzbenik& udz);
};

#endif
