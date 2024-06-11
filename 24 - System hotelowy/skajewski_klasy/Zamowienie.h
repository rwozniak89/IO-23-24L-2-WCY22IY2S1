#ifndef ZAMOWIENIE_H
#define ZAMOWIENIE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Klient.h"
#include "java/lang/String.h"

class Zamowienie
{
private:
	int idZamowienia;

	java::lang::String opis;

	double cena;

	boolean zrealizowane;

	Klient klient;
};
#endif
