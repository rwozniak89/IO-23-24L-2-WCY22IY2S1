#ifndef OSOBA_H
#define OSOBA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"

class Osoba
{
private:
	int id;

	java::lang::String imie;

	java::lang::String nazwisko;

	java::lang::String email;

	java::lang::String haslo;


public:
	void rejestracja();

	void logowanie();

	void wylogowanie();

	void edytujProfil();

};
#endif
