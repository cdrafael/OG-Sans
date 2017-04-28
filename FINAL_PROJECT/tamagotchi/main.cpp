//COMPILE WITH g+++ main.cpp transfer.cpp egg.cpp sprites.cpp display.cpp

#include <iostream>
#include <string>
#include "transfer.h"
#include "display_functions.h"

int main() {
try{
	std::srand(std::time(NULL));
	std::string name;
	Egg titlescreen("Blank");

	clearscreen();
	titleblock();
	dialogue("Welcome to Tamagotchi enter the name to start");
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

}

catch (Egg b){
	
	clearscreen();
	titleblock();
	dialogue(b.get_name().append( "has passed away"));
	display_grave(b.get_name(), b.get_age());
	empty_ui();

	}	

}
