#ifndef SYSTEM_ZARZADZANIA_PERSONEL_H
#define SYSTEM_ZARZADZANIA_PERSONEL_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "PersonelHotelowy.h"

class SystemZarzadzaniaPersonel
{
private:
	PersonelHotelowy personel[];

public:
	void dodajPracownika(PersonelHotelowy pracownik);

	void odnotujRozpoczeciePracy(PersonelHotelowy pracownik);

	void usunPracownika(PersonelHotelowy pracownik);

	void wyswietlHarmonogramPracy(PersonelHotelowy pracownik);

	void odnotujZakonczeniePracy(PersonelHotelowy pracownik);

};
#endif
