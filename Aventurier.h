#pragma once
#include <vector>
#include "Quete.h"

using std::vector;

class Aventurier
{
private:
	int niveau;
	vector<Quete*> tabQuete;
public:
	Aventurier(int niv);
	~Aventurier();
	void afficherQuetes();
	void ajouterQuete(Quete* quete);
	int getNiv();
};

