#ifndef REZERWACJA_H
#define REZERWACJA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Klient.h"
#include "Pokoj.h"

class Rezerwacja
{
private:
	int idRezerwacji;

	int dzienOd;

	int miesiacOd;

	int rokOd;

	int dzienDo;

	int miesiacDo;

	int rokDo;

	Klient klient;
	Pokoj pokoj;

public:
	boolean poTerminie(Rezerwacja innaRezerwacja);

	boolean przedTerminem(Rezerwacja innaRezerwacja);

};
#endif
