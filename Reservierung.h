#pragma once
#include"Kunde.h"
#include"Wagen.h"
class Reservierung
{
private:
	Kunde persoana;
	Wagen Auto;
	int tage;

public:
	Reservierung(Kunde persoana, Wagen Auto, int tage);
};

