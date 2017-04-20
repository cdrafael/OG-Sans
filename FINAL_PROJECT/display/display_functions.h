//	display_functions.h
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

#ifndef DISPLAY_FUNCTIONS_H
#define DISPLAY_FUNCTIONS_H

#include <iostream>
#include <string>

//Function used to print Tamagotchi
//titleblock at top of display
void titleblock();

//Function used to print empty
//portion under titleblock when
//Tamagotchi is not talking
void empty_dialogue();

//Function used to print dialogue box
//under titleblock when the Tamagotchi
//is talking
void dialogue(std::string);

//Function that print blank box in
//place of user ui when no actions
//can be done
void empty_ui();

//Functions to print bottom box that
//shows what actions the user can
//do
void ui();

//Print the sprite section of the
//display to the screen
void display_blank();
void display_egg();
<<<<<<< HEAD
void display_baby();
=======

//Functions that display different
//ages of the Tamagotchi
/*void display_baby();
>>>>>>> f096a6ce153d526b97d82fa0777b66caf8fcc922
void display_kid();
void display_teen();
void display_adult();
void display_parent();*/

//Function to act as clear
void clearscreen();
#endif //DISPLAY_FUNCTIONS_H
