#ifndef SYSTEM_REKOMENDACJI_H
#define SYSTEM_REKOMENDACJI_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Klient.h"

class SystemRekomendacji
{
private:
	Klient klienci[];

public:
	void generujRekomendacje(Klient klient);

};
#endif
