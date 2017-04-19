#include "egg.h"

//Function to feed, increments hunger and happiness
void Egg::feed(){
	hunger++;
	happiness++;
		
}

//Function that checks poop_count and increments after everry 3 actions
//If the poop is not cleaned after 9 actions (3 poops), Tamagotcchi gets sick
void Egg::poop_check() {
	//Every 3 actions, tamagotchi poops
	if(age % 3 == 0) {
		poop_count++;
	}

	if(poop_count >= 3) {
		sick = true;
	}
}

//Function that gives Tamagotchi drugz
//66% chance to heal the Tamagotchi
//33% chance for nothing to happen
void Egg:medicine() {
	int random;
	// Add line of code to make completely random
	if(sick == true) {
		random = rand() % 3 

		if (random == 0) {
			sick = true;
		}
		
		else {
			sick = false;
		}
	}

	else {
		return;
	}
}

//Function that cleans the screen of poop
//Poop count gets reset back to zero
void Egg::clean() {
	poop_count = 0
}















