//	left_right.cpp
//
//	EE205-002
//	Final Project
//	Tamagotchi Game
//
//	OG-Sans!!!
//	Anthony Martin
//	Charles Rafael
//	Jacob Somera
//

#include "tamagotchi_functions.h"
#include "./display/display_functions.h"

void left_right_game(int age){
	int player_dir;
	int tama_dir;
	int player_wins = 0;
	int tama_wins = 0;

	titleblock();
	dialogue("\"Welcome to the game. Guess left or right. If you are correct,  you get a point, else I will get a point. Best out of five      wins.\"");
	if(age <= 5 ){
		display_baby();
	} else if(age <= 10) {
		display_kid();
	} else if(age <= 16) {
		display_teen();
	} else if(age <= 22) {
		display_adult();
	} else if(age >= 23) {
		display_parent();
	}
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

		if(age <= 5){
			display_baby();
		} else if(age <= 10) {
			display_kid();
		} else if(age <= 16) {
			display_teen();
		} else if(age <= 22) {
			display_adult();
		} else if(age >= 23) {
			display_parent();
		}
		game_ui(player_wins,tama_wins);
	}

	clearscreen();

	titleblock();
	if(player_wins>tama_wins){
		dialogue("\"Congrats, you won!\"");
	} else if(tama_wins>player_wins){
		dialogue("\"Hooray, I won!\"");
	}
	if(age <= 5){
		display_baby();
	} else if(age <= 10) {
		display_kid();
	} else if(age <= 16) {
		display_teen();
	} else if(age <= 22) {
		display_adult();
	} else if(age >= 23) {
		display_parent();
	}
	game_ui(player_wins,tama_wins);
}
