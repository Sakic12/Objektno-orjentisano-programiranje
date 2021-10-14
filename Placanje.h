#ifndef PLACANJE_H
#define PLACANJE_H
#include "Datum.h"

class Placanje
{
	private:
		Datum datumPlacanja;
			int iznos;
	public:
		void setIznos(int iznos);
		int getIznos();
		void setDatumPlacanja(Datum datumPlacanja);
		Datum getDatumPlacanja();
		virtual void plati();
		Placanje();
		~Placanje(){};
};

#endif
