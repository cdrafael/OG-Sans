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
// portion under titleblock when
//Tamagotchi is not talking
void empty_dialogue();

//Functin used to print dialogue box
//under titleblock when the Tamagotchi
//is talking
void dialogue(std::string);

#endif //DISPLAY_FUNCTIONS_H
