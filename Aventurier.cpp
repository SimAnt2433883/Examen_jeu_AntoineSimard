#include "Aventurier.h"
#include <vector>
#include "Utils.h"

Aventurier::Aventurier(int niv)
{
	this->niveau = niv;
}

Aventurier::~Aventurier() 
{
	for (auto i : tabQuete)
		delete i;
}

void Aventurier::afficherQuetes()
{
	for (int i = 0; i < tabQuete.size(); i++)
		Utils::print(tabQuete[i]->to_string());
}

void Aventurier::ajouterQuete(Quete* quete) { tabQuete.push_back(quete); }

int Aventurier::getNiv() { return niveau; }