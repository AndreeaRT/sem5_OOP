#pragma once
using namespace std;
#include <iostream>

class Kunde
{
public:
	/*Konstructor!
	*/
	Kunde();
	Kunde(int id,std::string name);
	//ID getter
	int getID();
	std::string getName();
	//ID setter
	void setID(int ID);
	void setName(std::string Name);

private:
	int ID;
	std::string Name;
};
