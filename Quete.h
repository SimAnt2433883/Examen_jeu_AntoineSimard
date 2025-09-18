#pragma once
#include <string>

using std::string;

class Quete
{
	// J'ai du inverser public et private sinon nivDifficulte difficulte ne trouvait pas l'enum nivDifficulte.
public:
	enum nivDifficulte
	{
		FACILE = 1,
		MOYEN = 2,
		DIFFICILE = 3
	};
	Quete(string nom, Quete::nivDifficulte difficulte, int nivMin, int recompenseOr, int expRecu);
	~Quete();
	nivDifficulte getDifficulte();
	int getNivMin();
	int getRecompense();
	int getExp();
	string to_string();

private:
	string nom;
	int nivMin;
	int recompenseOr;
	int expRecu;
	nivDifficulte difficulte;
};

