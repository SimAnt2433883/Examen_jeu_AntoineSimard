#pragma once
#include "Quete.h"

class FactoryQuete
{
public:
	static Quete::nivDifficulte getRandomDiff();
	static Quete* getRandomQuete();
};

