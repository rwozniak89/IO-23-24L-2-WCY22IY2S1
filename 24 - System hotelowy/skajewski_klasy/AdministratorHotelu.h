#ifndef ADMINISTRATOR_HOTELU_H
#define ADMINISTRATOR_HOTELU_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Osoba.h"
#include "List.h"
#include "Hotel.h"
#include "PersonelHotelowy.h"

class AdministratorHotelu : public Osoba
{
private:
	List<Hotel> zarzadzaneHotele;

public:
	void dodajOferte(Hotel hotel);

	void zarzadzajRezerwacjami();

	void generujRaporty();

	void aktualizujInformacje(Hotel hotel);

	void zarzadzajPersonel(PersonelHotelowy personel);

	void monitorujKonkurencje();

	void zarzadzajOpiniami();

};
#endif
