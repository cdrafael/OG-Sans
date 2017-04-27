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
void info_ui(int ha,int hu,bool s,std::string n,int a,int w);
void game_ui(int p_wins,int t_wins);

//Functions used to change the section
//of the display for the character sprite
//Mainly the different ages as the Tamagotchi
//grows
//Also includes a blank for light on/off and
//grave if the Tamagotchi dies while playing
void display_blank();
/*void display_egg();
void display_baby();
void display_kid();
void display_teen();
void display_adult();
void display_parent();*/
void display_grave(std::string name,int age);

//Function to act as clear
void clearscreen();
#endif //DISPLAY_FUNCTIONS_H
