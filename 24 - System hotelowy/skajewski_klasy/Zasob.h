#ifndef ZASOB_H
#define ZASOB_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Pokoj.h"
#include "java/lang/String.h"

class Zasob
{
private:
	int idZasobu;

	java::lang::String nazwa;

	double cena;

	boolean dostepny;

	Pokoj pokoj;
};
#endif
