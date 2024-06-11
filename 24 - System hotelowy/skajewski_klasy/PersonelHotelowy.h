#ifndef PERSONEL_HOTELOWY_H
#define PERSONEL_HOTELOWY_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Osoba.h"
#include "Hotel.h"
#include "Klient.h"
#include "java/lang/String.h"

class PersonelHotelowy : public Osoba
{
private:
	java::lang::String pozycja;

	Hotel hotel;

public:
	void zameldujGoscia(Klient gosc);

	void wymeldujGoscia(Klient gosc);

	void zrealizujZyczenia(Klient gosc, java::lang::String zyczenie);

	void zarzadzajZasobami();

	void odbierajZlecenia();

};
#endif
