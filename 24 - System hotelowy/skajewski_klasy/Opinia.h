#ifndef OPINIA_H
#define OPINIA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Hotel.h"
#include "Klient.h"
#include "java/lang/String.h"

class Opinia
{
private:
	int id;

	int ocena;

	java::lang::String komentarz;

	Hotel hotel;
	Klient klient;
};
#endif
