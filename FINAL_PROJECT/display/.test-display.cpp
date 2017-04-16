//	test-display.cpp
//	
//	EE205-002
//	Final Project
//	Tamagotchi
//
//	OG-Sans!!!
//	Anthony Martin
//	Charles-Rhon Rafael
//	Jacob Somera
//

#include "display_functions.h"

int main() {
	char c;
	
	titleblock();
	empty_dialogue();
	display_egg();
	empty_ui();
	
	c = getchar();
	if(c != '\n'){
		getchar();
	}

	titleblock();
	dialogue("This is Tamagotchi.");
	display_baby();
	ui();

	c = getchar();
	if(c != '\n'){
		getchar();
	}

	titleblock();
	dialogue("Play with me, and watch me grow.");
	display_kid();
	ui();	
	
	c = getchar();
	if(c != '\n'){
		getchar();
	}

	titleblock();
	dialogue("I like games, and food.");
	display_teen();
	ui();	
	c = getchar();
	if(c != '\n'){
		getchar();
	}

	titleblock();
	dialogue("You just have to taken care of me.");
	display_adult();
	ui();	

	c = getchar();
	if(c != '\n'){
		getchar();
	}

	titleblock();
	dialogue("Enjoy the game.");
	display_parent();
	ui();	

	c = getchar();
	if(c != '\n'){
		getchar();
	}

	return 0;
}
