#include "egg.h"

//Function to feed, increments hunger and happiness
void Egg::feed(){
	//If hunger is less that 4, he can still eat
	if(hunger < 4) {
		hunger++;

		//If happiness is less that 4, he can still be happy
		if(happiness < 4) {
			happiness++;
		}
	}
	
	//Else he must be full
	else {
		//Increment a count that keeps track of overeating
		feed_count++;

		//If he eats too much, he becomes less happy and gets sick
		if (feed_count >= 3) {
			happiness--;
			sick = true;
		}

		//If you feed him too much, he dies
		if (feed_count >= 5) {
			death = true;
		}
	}
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
void Egg::medicine() {
	int random;

	if (sick == false) {
		med_count++;
	}
	// Add line of code to make completely random
	if(sick == true) {
		random = rand() % 3; 

		if (random == 0) {
			sick = true;
		}
		
		else {
			sick = false;
			sick_count = 0;
		}
	}

	if(med_count > 5) {
		death = true;
	}

	else {
		return;
	}
}

//Function that cleans the screen of poop
//Poop count gets reset back to zero
void Egg::clean() {
	poop_count = 0;
}

/*
//Function that turns off lights
void Egg::light() {

	// Add light display
}

//Function that displays the info
void Egg:display_info() {
	
	// Add display info
}
*/
