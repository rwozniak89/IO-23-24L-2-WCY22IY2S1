#ifndef KLIENT_H
#define KLIENT_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Osoba.h"
#include "List.h"
#include "Hotel.h"
#include "Pokoj.h"
#include "java/lang/String.h"

class Klient : public Osoba
{
private:
	java::lang::String telefon;

	java::lang::String adres;

	java::lang::String preferencje;

	java::lang::String jezyk;

	List<Hotel> ulubioneHotele;

public:
	void usunKonto();

	void dodajDoUlubionych(Hotel hotel);

	void przegladajOferty();

	void zarezerwujPokoj(Pokoj pokoj, int termin);

	void dodajOpinia(int opinia);

	void przegladajOpinie();

	void kontaktZAdministratorem(Hotel hotel);

	void negocjujCene(Pokoj pokoj, float propozycjaCena);

	void zglosReklamacje(int reklamacja);

};
#endif
