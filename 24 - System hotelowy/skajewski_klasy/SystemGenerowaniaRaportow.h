#ifndef SYSTEM_GENEROWANIA_RAPORTOW_H
#define SYSTEM_GENEROWANIA_RAPORTOW_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Rezerwacja.h"

class SystemGenerowaniaRaportow
{
private:
	Rezerwacja rezerwacje[];

public:
	void generujRaportFinansowy();

	void generujRaportRezerwacji();

	void generujRaportOblozenia();

	void generujRaportOpinie();

	void generujRaportWydajnosci();

};
#endif
