#ifndef SYSTEM_LOGOWANIA_H
#define SYSTEM_LOGOWANIA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Zamowienie.h"
#include "Osoba.h"
#include "java/lang/String.h"

class SystemLogowania
{
	class SystemPlatnosci
	{
	private:
		Zamowienie zamowienia[];

	public:
		void dokonajPlatnosci(Zamowienie zamowienie);

		void zwrocPlatnosc(float kwota, java::lang::String metoda);

		void generujFakture(Zamowienie zamowienie);

	};


private:
	Osoba uzytkownicy[];

public:
	void zaloguj(Osoba osoba);

	void wyloguj(Osoba osoba);

};
#endif
