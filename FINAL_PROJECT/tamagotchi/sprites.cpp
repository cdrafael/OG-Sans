//	sprites.cpp
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
#include "parent.h"

void display_blank(){
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
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XXXX                                                                                 XXXX"
			  << std::endl;

}

void Egg::display() {
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
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                         .-\"-.                                         X"
			  << std::endl
			  << "X                                        '=^=^='                                        X"
			  << std::endl
			  << "X                                       /=^=^=^=\\                                       X"
			  << std::endl
			  << "X                                      :^=^=^=^=^;                                      X"
			  << std::endl
			  << "X                                      |^=^=^=^=^|                                      X"
			  << std::endl
			  << "X                                      :^=^=^=^=^:                                      X"
			  << std::endl
			  << "X                                      \\=^=^=^=^=/                                      X"
			  << std::endl
			  << "X_______________________________________`.=^=^=.'_______________________________________X"
			  << std::endl
			  << "X                                        '~~~~~`                                        X"
			  << std::endl
			  << "XX                                \\___________________/                                XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XXXX                                                                                 XXXX"
			  << std::endl;
}

void Baby::display() {
	std::string poop(40,' ');
	std::string interm = std::to_string(get_poop());
	for(int count = 0;count < interm.size();count++){
		poop[count] = interm[count];
	}
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
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                        OOOOOOO                                        X"
			  << std::endl
			  << "X                                      OO       OO                                      X"
			  << std::endl
			  << "X                                     O           O                                     X"
			  << std::endl
			  << "X                                    O             O                                    X"
			  << std::endl
			  << "X                                   O    |     |    O                                   X"
			  << std::endl
			  << "X                                   O    |     |    O                                   X"
			  << std::endl
			  << "X                                   O               O                                   X"
			  << std::endl
			  << "X                                   O       X       O                                   X"
			  << std::endl
			  << "X____________________________________O             O____________________________________X"
			  << std::endl
			  << "X                                     OOOOOOOOOOOOO                                     X"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XXXX        Poop: "<<               poop               <<"                           XXXX"
			  << std::endl;
}

void Kid::display() {
	std::string poop(40,' ');
	std::string interm = std::to_string(get_poop());
	for(int count = 0;count < interm.size();count++){
		poop[count] = interm[count];
	}
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
			  << std::endl
			  << "X                                              O                                        X"
			  << std::endl
			  << "X                                        OOOOOOO                                        X"
			  << std::endl
			  << "X                                      OO       OO                                      X"
			  << std::endl
			  << "X                                     O           O                                     X"
			  << std::endl
			  << "X                                    O             O                                    X"
			  << std::endl
			  << "X                                   O    |     |    O                                   X"
			  << std::endl
			  << "X                                   O    |     |    O                                   X"
			  << std::endl
			  << "X                                  O                 O                                  X"
			  << std::endl
			  << "X                                 OOO    _______    OOO                                 X"
			  << std::endl
			  << "X____________________________________O             O____________________________________X"
			  << std::endl
			  << "X                                     OOOOOOOOOOOOO                                     X"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XXXX        Poop: "<<               poop               <<"                           XXXX"
			  << std::endl;
}

void Teen::display() {
	std::string poop(40,' ');
	std::string interm = std::to_string(get_poop());
	for(int count = 0;count < interm.size();count++){
		poop[count] = interm[count];
	}
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
			  << "X                                  OOOOO       OOOOO                                    X"
			  << std::endl
			  << "X                                 O     O     O     O                                   X"
			  << std::endl
			  << "X                                 O     O     O     O                                   X"
			  << std::endl
			  << "X                                 O oooo OOOOO oooo O                                   X"
			  << std::endl
			  << "X                                O                   O                                  X"
			  << std::endl
			  << "X                               O    ^           ^    O                                 X"
			  << std::endl
			  << "X                              O    / \\         / \\    O                                X"
			  << std::endl
			  << "X                              O                       O                                X"
			  << std::endl
			  << "X                              O                       O                                X"
			  << std::endl
			  << "X                              O        _______        O                                X"
			  << std::endl
			  << "X                              O                       O                                X"
			  << std::endl
			  << "X                               O                     O                                 X"
			  << std::endl
			  << "X                                OOO               OOO                                  X"
			  << std::endl
			  << "X                                   OOO  ooooo  OOO                                     X"
			  << std::endl
			  << "X                                      O       O                                        X"
			  << std::endl
			  << "X______________________________________O       O________________________________________X"
			  << std::endl
			  << "X                                      O  OOO  O                                        X"
			  << std::endl
			  << "XX                                      OO   OO                                        XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XXXX        Poop: "<<               poop               <<"                           XXXX"
			  << std::endl;
}

void Adult::display() {
	std::string poop(40,' ');
	std::string interm = std::to_string(get_poop());
	for(int count = 0;count < interm.size();count++){
		poop[count] = interm[count];
	}
	std::cout << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                   OOOOO      OOOOO                                    X"
			  << std::endl
			  << "X                                  O     O    O     O                                   X"
			  << std::endl
			  << "X                                 O      O    O      O                                  X"
			  << std::endl
			  << "X                                 O ooooo OOOO ooooo O                                  X"
			  << std::endl
			  << "X                                O                    O                                 X"
			  << std::endl
			  << "X                               O     ^          ^     O                                X"
			  << std::endl
			  << "X                              O     / \\        / \\     O                               X"
			  << std::endl
			  << "X                              O                        O                               X"
			  << std::endl
			  << "X                              O                        O                               X"
			  << std::endl
			  << "X                               O       ________       O                                X"
			  << std::endl
			  << "X                                OO                  OO                                 X"
			  << std::endl
			  << "X                                  OOO            OOO                                   X"
			  << std::endl
			  << "X                                     OO oooooo OO                                      X"
			  << std::endl
			  << "X                                    O            O                                     X"
			  << std::endl
			  << "X                                   O  O        O  O                                    X"
			  << std::endl
			  << "X                                  O  OO        OO  O                                   X"
			  << std::endl
			  << "X                                   OO O oooooo O OO                                    X"
			  << std::endl
			  << "X                                      O        O                                       X"
			  << std::endl
			  << "X______________________________________O   OO   O_______________________________________X"
			  << std::endl
			  << "X                                      O   OO   O                                       X"
			  << std::endl
			  << "XX                                      OOO  OOO                                       XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XXXX        Poop: "<<               poop               <<"                           XXXX"
			  << std::endl;
}

void Parent::display() {
	std::string poop(40,' ');
	std::string interm = std::to_string(get_poop());
	for(int count = 0;count < interm.size();count++){
		poop[count] = interm[count];
	}
	std::cout << "X                                  OOOOOO      OOOOOO                                   X"
			  << std::endl
			  << "X                                 O      O    O      O                                  X"
			  << std::endl
			  << "X                                 O      O    O      O                                  X"
			  << std::endl
			  << "X                                 O      O    O      O                                  X"
			  << std::endl
			  << "X                                 O ooooo OOOO ooooo O                                  X"
			  << std::endl
			  << "X                                O                    O                                 X"
			  << std::endl
			  << "X                               O     ^          ^     O                                X"
			  << std::endl
			  << "X                              O     / \\        / \\     O                               X"
			  << std::endl
			  << "X                              O                        O                               X"
			  << std::endl
			  << "X                              O                        O                               X"
			  << std::endl
			  << "X                               O       ________       O                                X"
			  << std::endl
			  << "X                                OO                  OO                                 X"
			  << std::endl
			  << "X                                  OOO            OOO                                   X"
			  << std::endl
			  << "X                                     OO oooooo OO                                      X"
			  << std::endl
			  << "X                                   OO            OO                                    X"
			  << std::endl
			  << "X                                  O   O        O   O                                   X"
			  << std::endl
			  << "X                                  O   O        O   O                                   X"
			  << std::endl
			  << "X                                  O  OO        OO  O                                   X"
			  << std::endl
			  << "X                                   OO O oooooo O OO                                    X"
			  << std::endl
			  << "X                                      O        O                                       X"
			  << std::endl
			  << "X______________________________________O   OO   O_______________________________________X"
			  << std::endl
			  << "X                                      O   OO   O                                       X"
			  << std::endl
			  << "XX                                      OOO  OOO                                       XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XXXX        Poop: "<<               poop               <<"                           XXXX"
			  << std::endl;
}

void display_grave(std::string n,int i) {
	std::string name(11,' ');
	std::string interm = std::to_string(i);
	std::string age(11,' ');
	
	for(int count = 0;count < n.size();count++){
		name[count] = n[count];
	}
	for(int count = 0;count < interm.size();count++){
		age[count] = interm[count];
	}
	

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
			  << "X                                       OOOOOOOOO                                       X"
			  << std::endl
			  << "X                                     OO         OO                                     X"
			  << std::endl
			  << "X                                    O             O                                    X"
			  << std::endl
			  << "X                                   O               O                                   X"
			  << std::endl
			  << "X                                   O  Name:        O                                   X"
			  << std::endl
			  << "X                                   O  "<< name <<"  O                                   X"
			  << std::endl
			  << "X                                   O               O                                   X"
			  << std::endl
			  << "X                                   O  Age:         O                                   X"
			  << std::endl
			  << "X                                   O  "<< age <<"  O                                   X"
			  << std::endl
			  << "X                                   O               O                                   X"
			  << std::endl
			  << "X                                   O               O                                   X"
			  << std::endl
			  << "X                                   O               O                                   X"
			  << std::endl
			  << "X                                   O               O                                   X"
			  << std::endl
			  << "X___________________________________O               O___________________________________X"
			  << std::endl
			  << "X                                   OOOOOOOOOOOOOOOOO                                   X"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XXXX                                                                                 XXXX"
			  << std::endl;
}

void display_rules(){
	std::cout << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X   Feed) Press 1 to feed your Tamagotchi. Make sure to not allow it to starve to death X"
			  << std::endl
			  << "X       However, do not overfeed it. Your Tamagotchi will pop if you feed it too much   X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X   Play) Press 2 to play a special game with your Tamagotchi, playing with your        X"
			  << std::endl
			  << "X       Tamagotchi makes it more happy, and also decrements hunger                      X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X   Light) Press 3 to turn off the lights                                               X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X   Clean) Press 4 to clean your Tamagotchi, this resets the poop count                 X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X   Medicine) Press 5 to heal your Tamagotchi if it is sick. There is a 33% chance that X"
			  << std::endl
			  << "X       it will not heal your Tamagotchi, and a 66% that it will. However, do not       X"
			  << std::endl
			  << "X       overdose your Tamagotchi, it will die                                           X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X   Info) Press 6 to check on yout Tamagotchi's status, remember to feed, clean, and    X"
			  << std::endl
			  << "X       always check to see if it is sick. Check this frequently                        X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XXXX                                                                                 XXXX"
			  << std::endl;
}
