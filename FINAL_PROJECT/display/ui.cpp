//	ui.cpp
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

void empty_ui(){
	std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
			  << std::endl
			  << "XXXX                                                                                 XXXX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XXXX  Q)QUIT                                                                         XXXX"
			  << std::endl
			  << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
			  << std::endl;
}

void ui(){
	std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
			  << std::endl
			  << "XXXX                                                                                 XXXX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XX          1)FEED                      2)GAME                      3)DISCIPLINE       XX"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "XX          3)CLEAN                     4)MEDICINE                  6)INFO             XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XXXX  Q)QUIT                                                                         XXXX"
			  << std::endl
			  << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
			  << std::endl;

}
