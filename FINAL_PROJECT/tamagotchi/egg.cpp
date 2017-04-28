#include "egg.h"
#include "display_functions.h"

//Function to feed, increments hunger and happiness
void Egg::feed(){
	int hungry;
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

//Function that starts the game
void Egg::game(){
	int player_dir;
	int tama_dir;
	int player_wins = 0;
	int tama_wins = 0;

	titleblock();
	dialogue("\"Welcome to the game. Guess left or right. If you are correct,  you get a point, else I will get a point. Best out of five      wins.\"");
	display();
	game_ui(player_wins,tama_wins);

	for(int count=0;count<5;count++){
		tama_dir = rand()%2;

		std::cin >> player_dir;

		clearscreen();

		while(player_dir != 1 && player_dir != 2){
			std::cin >> player_dir;
		}

		player_dir = player_dir-1;

		titleblock();
		if(tama_dir == 0){
			if(player_dir == tama_dir){
				dialogue("\"LEFT. Yay, you're correct!!!\"");
				player_wins += 1;
			} else {
				dialogue("\"LEFT. Boo, you're wrong!!!\"");
				tama_wins += 1;
			}
		} else if(tama_dir == 1) {
			if(player_dir == tama_dir){
				dialogue("\"RIGHT. Yay, you're correct!!!\"");
				player_wins += 1;
			} else {
				dialogue("\"RIGHT. Boo, you're wrong!!!\"");
				tama_wins += 1;
			}
		}

		display();
		game_ui(player_wins,tama_wins);
	}

	clearscreen();

	titleblock();
	if(player_wins>tama_wins){
		dialogue("\"Congrats, you won!\"");
	} else if(tama_wins>player_wins){
		dialogue("\"Hooray, I won!\"");
	}
	
	display();
	game_ui(player_wins,tama_wins);
}
