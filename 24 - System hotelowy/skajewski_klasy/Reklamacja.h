#ifndef REKLAMACJA_H
#define REKLAMACJA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Klient.h"
#include "Hotel.h"
#include "java/lang/String.h"

class Reklamacja
{
private:
	int id;

	java::lang::String status;

	java::lang::String opis;

	Klient klient;
	Hotel hotel;
};
#endif
