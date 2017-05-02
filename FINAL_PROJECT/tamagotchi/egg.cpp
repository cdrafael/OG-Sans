#include "egg.h"
#include "display_functions.h"

//Function to feed, increments hunger and happiness
void Egg::feed(){
	inc_happiness();
	inc_hunger();

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
	std::string p_dir;
	int player_dir;
	int tama_dir;
	int player_wins = 0;
	int tama_wins = 0;

	titleblock();
	dialogue("\"Welcome to the game. Guess left or right. If you are correct,  you get a point, else I will get a point. Best out of five      wins.\"");
	display();
	game_ui(player_wins,tama_wins);

	while(player_wins < 3 && tama_wins < 3){
		tama_dir = rand()%2;

		std::cin >> p_dir;
	
		clearscreen();
		
		titleblock();
		if(p_dir[0] != '1' && p_dir[0] != '2'){
			dialogue("\"That's not a direction.\"");
		} else {
			player_dir = p_dir[0] - '0';
			player_dir = player_dir-1;

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
