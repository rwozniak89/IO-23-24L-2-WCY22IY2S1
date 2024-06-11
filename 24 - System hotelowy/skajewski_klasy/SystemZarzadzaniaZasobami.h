#ifndef SYSTEM_ZARZADZANIA_ZASOBAMI_H
#define SYSTEM_ZARZADZANIA_ZASOBAMI_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Zasob.h"

class SystemZarzadzaniaZasobami
{
private:
	Zasob zasoby[];

public:
	void dodajZasob(Zasob zasob);

	void usunZasob(Zasob zasob);

};
#endif
