#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "List.h"
#include "Pokoj.h"
#include "java/lang/String.h"

class Hotel
{
private:
	int id;

	java::lang::String nazwa;

	java::lang::String adres;

	java::lang::String opis;

	float ocena;

	java::lang::String udogodnienia;

	List<Pokoj> pokoje;
	List<String> zdjecia;

public:
	void dodajPokoj(Pokoj pokoj);

	void usunPokoj(Pokoj pokoj);

	void aktualizujInformacje();

};
#endif
