//COMPILE WITH g+++ main.cpp transfer.cpp egg.cpp sprites.cpp display.cpp

#include <iostream>
#include <string>
#include <unistd.h>
#include "transfer.h"
#include "display_functions.h"

int main() {
try{
	std::srand(std::time(NULL));
	std::string name;
	Egg titlescreen("Blank");
	char choice;

	clearscreen();
	titleblock();
	dialogue("Welcome to Tamagotchi press 1 to see the rules, press 2 to start the game");
	titlescreen.display();
	empty_ui();

	while (1) {

		std::cin >> choice;

		clearscreen();
		titleblock();
		dialogue("Welcome to Tamagotchi press 1 to see the rules, press 2 to start the game");
		titlescreen.display();
		empty_ui();

		if (choice == '1') {

			clearscreen();
			titleblock();
			dialogue("Listed below are rules and instructions");
			display_rules();
			empty_ui();

			char a;
			while (a != '1') {
				std::cin >> a;
			}

			clearscreen();
			titleblock();
			dialogue("Welcome to Tamagotchi press 1 to see the rules, press 2 to start the game");
			titlescreen.display();
			empty_ui();

		}	
		
		else if (choice == '2') {

			clearscreen();
			titleblock();
			dialogue("Please enter the name of the Tamagotchi");
			titlescreen.display();
			empty_ui();

			std::cin >> name;
			if (name.length() > 11) {
				while (name.length() > 11) {
					clearscreen();
					titleblock();
					dialogue("Please enter a name with less than 11 character");
					titlescreen.display();
					empty_ui();
					std::cin >> name;
				}
			}

			//Make the egg
			Egg e(name);

			//Egg phase
			Baby b = hatch_egg(e);

			//Baby phase
			Kid k = baby_to_kid(b);
			if(k.get_death()){
				throw k;
			}

			//Kid phase
			Teen t = kid_to_teen(k);
			if(t.get_death()){
				throw t;
			}

			//Teen phase
			Adult a = teen_to_adult(t);
			if(a.get_death()){
				throw a;
			}

			//Adult phase
			Parent p = adult_to_parent(a);
			if(p.get_death()){
				throw p;
			}

			//Parent phase
			final_days(p);
			if(p.get_death()){
				throw p;
			}

			choice = EOF;
		}
		else if(choice == 'q'){
			throw titlescreen;
		}

		else if (choice != '1' && choice != '2'&& choice != 'q') {
			clearscreen();
			titleblock();
			dialogue("That is not a valid command");
			titlescreen.display();
			empty_ui();

			sleep(1);
		}

	}

}

catch (Egg b){
	
	clearscreen();
	titleblock();
	dialogue(b.get_name().append( " has passed away"));
	display_grave(b.get_name(), b.get_age());
	empty_ui();

	}	

}
