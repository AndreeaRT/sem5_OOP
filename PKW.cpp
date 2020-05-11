#include <iostream>
#include "PKW.h"
using namespace std;

PKW::PKW() //am overload?
{

}

PKW::PKW(int id1, std::string marke1, std::string modell1, std::string sonderauss1): Wagen(id1, marke1, modell1) // int, std::string...is de ajuns
{
	//this->ID = id1;
	//this->Marke = marke1;
	//this->Modell = modell1;
	this->Sonderauss = sonderauss1;
}

PKW::~PKW()
{

}