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

void left_right_game(){
	int player_dir;
	int tama_dir;
	int player_wins = 0;
	int tama_wins = 0;

	for(int count=0;count<5;count++){
		tama_dir = rand()%2;

		std::cin >> player_dir;
		while(player_dir != 1 && player_dir != 2){
			std::cin >> player_dir;
		}

		player_dir = player_dir-1;

		if(tama_dir == 0){
			std::cout << "LEFT. ";
			if(player_dir == tama_dir){
				std::cout << "CORRECT!!!" << std::endl;
				player_wins += 1;
			} else {
				std::cout << "WRONG!!!" << std::endl;
				tama_wins += 1;
			}
		} else if(tama_dir == 1) {
			std::cout << "RIGHT. ";
			if(player_dir == tama_dir){
				std::cout << "CORRECT!!!" << std::endl;
				player_wins += 1;
			} else {
				std::cout << "WRONG!!!" << std::endl;
				tama_wins += 1;
			}
		}	

		std::cout << tama_dir << std::endl;
		std::cout << player_dir << std::endl;
		std::cout << std::endl;
	}
	
	std::cout << player_wins << std::endl;
	std::cout << tama_wins << std::endl;
}

