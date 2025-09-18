#include "Utils.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;

void Utils::print(string chaine)
{
	cout << chaine + "\n";
}

int Utils::random(int min, int max)
{
	return (min + rand() % (max - min));
}