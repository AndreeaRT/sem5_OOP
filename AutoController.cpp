#include "AutoController.h"


using namespace std;

AutoController::AutoController()
{
	repo = AutoInMemoryRepository();
	saveAuto(new Wagen(1, "Volkswagen", "Scirocco"));
	saveAuto(new Wagen(2, "Renault", "Clio"));
	saveAuto(new Wagen(3, "Audi", "R8"));
}

AutoController* AutoController::Instanz = NULL;

Wagen* AutoController::saveAuto(Wagen* a)
{
	return repo.save(a);
}

Wagen* AutoController::findAutoById(int id)
{
	return repo.Finde(id);
}

vector<Wagen*> AutoController::findAll()
{
	return repo.findAll();
}

Wagen* AutoController::updateAuto(Wagen* a)
{
	return repo.update(a);
}

Wagen* AutoController::deleteAuto(int id)
{
	return repo.del(id);
}

AutoController* AutoController::ret_Instanz()
{
	if(Instanz==NULL)
		Instanz = new AutoController();

	return Instanz;
}

void AutoController::sort_autos()
{
	for (int i = 0; i < repo.autos.size(); ++i) //nicht i++ !!
	{
		for (int j = 0; j < repo.autos.size(); ++i)
		{
			if (repo.autos[i]->getMarke() > repo.autos[j]->getMarke())
			{
				swap(repo.autos[i], repo.autos[j]);
			}
		}
	}
}