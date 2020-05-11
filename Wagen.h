#pragma once
#include <iostream>
using namespace std;

class Wagen
{
public:
	/*Konstructor!
	*/

	std::string getMarke();
	std::string getModell();
	Wagen();
	Wagen(int id, std::string markre, std::string model);
	int getID();
	void setID(int ID);
	void setMarke(std::string Marke);
	void setModell(std::string Modell);

private:
	int ID;
	std::string Marke, Modell;
};
