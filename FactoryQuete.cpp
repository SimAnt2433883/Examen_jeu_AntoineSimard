#include "FactoryQuete.h"
#include "Quete.h"
#include "Utils.h"
#include <vector>

using std::vector;
using std::string;

Quete::nivDifficulte FactoryQuete::getRandomDiff()
{
    int nbAleatoire = Utils::random(1, 101);

    if (nbAleatoire <= 75)
        return Quete::FACILE;
    else if (nbAleatoire <= 90)
        return Quete::MOYEN;
    else
        return Quete::DIFFICILE;
}

Quete* FactoryQuete::getRandomQuete()
{
    Quete::nivDifficulte difficulte = getRandomDiff();
    int nivMin, recompenseOr, exp;
    string nom;

    vector<string> nomsFaciles = {
        "Aider la fermiere", "Chasser les rats", "Livrer une lettre", "Patrouiller le village"
    };
    vector<string> nomsMoyens = {
        "Explorer la grotte", "Escorter un marchand", "Combattre les bandits", "Trouver un artefact ancien"
    };
    vector<string> nomsDifficiles = {
        "Tuer le dragon", "Sauver le royaume", "Affronter le seigneur demon", "Fermer un portail maudit"
    };

    switch (difficulte)
    {
    case Quete::FACILE:
        nom = nomsFaciles[Utils::random(0, nomsFaciles.size())];
        nivMin = Utils::random(1, 11);
        recompenseOr = Utils::random(100, 1001);
        exp = Utils::random(100, 2001);
        break;

    case Quete::MOYEN:
        nom = nomsMoyens[Utils::random(0, nomsMoyens.size())];
        nivMin = Utils::random(10, 26);
        recompenseOr = Utils::random(1000, 5001);
        exp = Utils::random(2000, 4001);
        break;

    case Quete::DIFFICILE:
        nom = nomsDifficiles[Utils::random(0, nomsDifficiles.size())];
        nivMin = Utils::random(25, 100);
        recompenseOr = Utils::random(5000, 35001);
        exp = Utils::random(4000, 14001);
        break;
    }

    return new Quete(nom, difficulte, nivMin, recompenseOr, exp);
}
