#include <iostream>
#include "Utils.h"
#include "FactoryQuete.h"
#include "Aventurier.h"

int main()
{
    srand(time(0));
    Aventurier aventurier(10);

    for (int i = 0; i < 12; i++)
    {
        Quete* quete = FactoryQuete::getRandomQuete();
        const int nivMin = quete->getNivMin();

        if (aventurier.getNiv() >= nivMin) {
            aventurier.ajouterQuete(quete);
            Utils::print("Quete acceptee : niveau aventurier (" +
                std::to_string(aventurier.getNiv()) + ") >= niveau quete (" +
                std::to_string(nivMin) + ")");
        }
        else {
            delete quete;
            Utils::print("Quete rejetee : niveau aventurier (" +
                std::to_string(aventurier.getNiv()) + ") < niveau quete (" +
                std::to_string(nivMin) + ")");
        }
    }


    Utils::print("-----------------------------------------");
    aventurier.afficherQuetes();
}