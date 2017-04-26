//COMPILE WITH g+++ main.cpp transfer.cpp egg.cpp sprites.cpp display.cpp

#include <iostream>
#include "transfer.h"
#include "display_functions.h"

int main() {
try{
	std::string name;
	Egg titlescreen("Gay");

	clearscreen();
	titleblock();

	dialogue("Welcome to Tamagotchi, please enter the name of your tamagotchi to begin");
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
		throw 'd';
	}

	//Kid phase
	Teen t = kid_to_teen(k);
	if(t.get_death()){
		throw 'd';
	}

	//Teen phase
	Adult a = teen_to_adult(t);
	if(a.get_death()){
		throw 'd';
	}

	//Adult phase
	Parent p = adult_to_parent(a);
	if(p.get_death()){
		throw 'd';
	}

	//Parent phase
	final_days(p);
	if(p.get_death()){
		throw 'd';
	}
}
catch (const char e){

	std::cout << "Tamagotchi is dead" << std::endl;

}
}
