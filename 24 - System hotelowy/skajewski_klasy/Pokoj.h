#ifndef POKOJ_H
#define POKOJ_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "List.h"
#include "java/lang/String.h"

class Pokoj
{
private:
	int id;

	java::lang::String numer;

	java::lang::String typ;

	float cena;

	java::lang::String status;

	java::lang::String udogodnienia;

	List<String> zdjecia;

public:
	void zarezerwuj(int termin);

	void anulujRezerwacje(int termin);

	void aktualizujStatus(java::lang::String status);

};
#endif
