#include "Quete.h"
#include "Aventurier.h"

Quete::Quete(string nom, Quete::nivDifficulte difficulte, int nivMin, int recompenseOr, int expRecu)
{
	this->nom = nom;
	this->difficulte = difficulte;
	this->nivMin = nivMin;
	this->recompenseOr = recompenseOr;
	this->expRecu = expRecu;
}

Quete::~Quete() {}

Quete::nivDifficulte Quete::getDifficulte() { return difficulte; }

int Quete::getNivMin() { return nivMin; }

int Quete::getRecompense() { return recompenseOr; }

int Quete::getExp() { return expRecu; }

string Quete::to_string()
{
    string infoDiff;
    switch (difficulte) {
    case FACILE:    
        infoDiff = "Facile"; 
        break;
    case MOYEN:     
        infoDiff = "Moyen"; 
        break;
    case DIFFICILE: 
        infoDiff = "Difficile"; 
        break;
    }

    return "Nom de la quete: " + nom + "\n" +
        "Difficulte: " + infoDiff + "\n" +
        "Niveau minimum: " + std::to_string(nivMin) + "\n" +
        "Recompense or: " + std::to_string(recompenseOr) + "\n" +
        "Experience recu: " + std::to_string(expRecu) + "\n";
}
