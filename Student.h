#ifndef STUDENT_H
#define STUDENT_H

#include "Osoba.h"

class Student : public Osoba
{
	private:
		int brIndeksa;
	public:
		Student();
		~Student();
		void setbrIndexa(int brI);
		int getbrIndexa();
		friend std::istream& operator>>(std::istream& unos, Student& stud);
		void ispis();
};

#endif
