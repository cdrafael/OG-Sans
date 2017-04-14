//	dialogue.cpp
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

void empty_dialogue() {

	std::cout << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl;

}

void dialogue(std::string in) {
	std::string line1(64,' ');
	std::string line2(64,' ');
	std::string line3(64,' ');

	for(int count = 0;count < in.size();count++) {
		if( count > (line1.size()+line2.size()+line3.size())) {
			line3[line3.size()-1] = '\"';
			count = in.size();
		} else if(count > (line1.size()+line2.size()-1)){
			line3[count%(line1.size()+line2.size())] = in[count];
		} else if(count >= line1.size()){
			line2[count%line1.size()] = in[count];
		} else if(count < line1.size()){
			line1[count] = in[count];
		}
	}

	std::cout << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO        X"
			  << std::endl
			  << "X       O                                                                      O        X"
			  << std::endl
			  << "X       O   " << line1                                                  << "   O        X"
			  << std::endl
			  << "X       O   " << line2                                                  << "   O        X"
			  << std::endl
			  << "X       O   "	<< line3                                                  << "   O        X"
			  << std::endl
			  << "X       O                                                                      O        X"
			  << std::endl
			  << "X       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO        X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl;

}
