#pragma once 
#include "worriers.hpp"
#include "Guardian.h"
#include "sentinel.h"
#include "Slayer.h"

class gameManager {
public:



	gameManager();


	worriers* chooseCharacter();

	void battlebegins( worriers& selected, worriers& target);

	void battleloop(worriers& selected, worriers& target);
};