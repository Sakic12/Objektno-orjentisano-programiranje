#ifndef ISPIT_H
#define ISPIT_H
#include <string>
#include <iostream>
#include <vector>
#include "Profesor.h"
#include "Student.h"
#include <vector>
class Ispit
{
	private:
		std::string naziv;
		std::string datumIspita, nazivPredmeta;
		std::vector <Student> studenta;
		std::vector <int> ocjene;
	public:
		Profesor profesor;
		Ispit();
		~Ispit();
		void setStudent(Student studenta);
		void setNaziv(std::string naziv);
		void setDatum(std::string datumIspita);
		void setOcjena(int ocjena);
		std::vector <Student> getStudent();
		std::vector <int> getOcjena();
		std::string getNaziv();
		std::string getDatum();
		double operator!();
		friend std::istream& operator>>(std::istream& unos, Ispit& isp);
		void ispis();
};

#endif
