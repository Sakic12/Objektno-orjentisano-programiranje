#ifndef DATUM_H
#define DATUM_H

class Datum
{
	private:
		int dan, mjesec, godina;
	public:
		void setDan(int dan);
		void setMjesec(int mjesec);
		void setGodina(int godina);
		int getDan();
		int getMjesec();
		int getGodina();
		Datum();
		Datum(int dan, int mjesec, int godina);
		~Datum(){};
};

#endif
