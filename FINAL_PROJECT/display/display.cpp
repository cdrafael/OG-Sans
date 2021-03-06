//	display.cpp
//
//	EE205-002
//	Final Project
//
//	OG-Sans!!!
//	Anthony Martin
//	Charles-Rhon Rafael
//	Jacob Somera
//

#include "display_functions.h"

/////    TITLEBLOCK    \\\\\

void titleblock() {
	std::cout << std::endl
			  << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
			  << std::endl
			  << "XXXX                                                                                 XXXX"
			  << std::endl
			  << "XX               _____                                 _       _     _                 XX"
			  << std::endl
			  << "XX              |_   _|_ _ _ __ ___   __ _  __ _  ___ | |_ ___| |__ (_)                XX"
			  << std::endl
			  << "X                 | |/ _` | '_ ` _ \\ / _` |/ _` |/ _ \\| __/ __| '_ \\| |                 X"
			  << std::endl
			  << "X                 | | (_| | | | | | | (_| | (_| | (_) | || (__| | | | |                 X"
			  << std::endl
			  << "XX                |_|\\__,_|_| |_| |_|\\__,_|\\__, |\\___/ \\__\\___|_| |_|_|                XX"
			  << std::endl
			  << "XX                                         |___/                                       XX"
			  << std::endl
			  << "XXXX                                                                                 XXXX"
			  << std::endl
			  << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
			  << std::endl;

}

/////    DIALOGUE    \\\\\

void empty_dialogue() {
	std::cout << "XXXX                                                                                 XXXX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XX                                                                                     XX"
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
			if(line1[0] == '\"'){
				line3[line3.size()-1] = '\"';
			}
			count = in.size();
		} else if(count > (line1.size()+line2.size()-1)){
			line3[count%(line1.size()+line2.size())] = in[count];
		} else if(count >= line1.size()){
			line2[count%line1.size()] = in[count];
		} else if(count < line1.size()){
			line1[count] = in[count];
		}
	}

	std::cout << "XXXX                                                                                 XXXX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XX      OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO       XX"
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

/////    UI    \\\\\

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

void info_ui(int ha,int hu,bool s,std::string n,int a,int w){
	std::string happiness(16,' ');
	std::string hunger(16,' ');
	std::string sick(16,' ');
	std::string name(16,' ');
	std::string age(16,' ');
	std::string weight(16,' ');

	std::string interm_hap = std::to_string(ha);
	std::string interm_hun = std::to_string(hu);
	std::string interm_age = std::to_string(a);
	std::string interm_wei = std::to_string(w);

	for(int count = 0;count < interm_hap.size();count++){
		happiness[count] = interm_hap[count];
	}
	for(int count = 0;count < interm_hun.size();count++){
		hunger[count] = interm_hun[count];
	}
	for(int count = 0;count < n.size();count++){
		name[count] = n[count];
	}
	for(int count = 0;count < interm_age.size();count++){
		age[count] = interm_age[count];
	}
	for(int count = 0;count < interm_wei.size();count++){
		weight[count] = interm_wei[count];
	}

	if(s == true){
		sick[0] = 'Y';
	}
	else sick[0] = 'N';
	
	std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
			  << std::endl
			  << "XXXX                                                                                 XXXX"
			  << std::endl
			  << "XX                Happiness: " << happiness << "                Name: " <<    name    << "    XX"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "X                    Hunger: " << hunger  << "                 Age: " <<    age     << "     X"
			  << std::endl
			  << "XX                                                                                     XX"
			  << std::endl
			  << "XX                     Sick: " << sick << "              Weight: " <<   weight   << "    XX"
			  << std::endl
			  << "XXXX  Q)QUIT                                                                         XXXX"
			  << std::endl
			  << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
			  << std::endl;
}

void game_ui(int p_wins,int t_wins){
	std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
			  << std::endl
			  << "XXXX                                                                                 XXXX"
			  << std::endl
			  << "XX                                    LEFT OR RIGHT                                    XX"
			  << std::endl
			  << "XX                        Press (1) for left and (2) for right.                        XX"
			  << std::endl
			  << "X                                                                                       X"
			  << std::endl
			  << "XX                                        WINS                                         XX"
			  << std::endl
			  << "XX                    You: "<<p_wins<<"                            Tama: "<<t_wins<<"                        XX"
			  << std::endl
			  << "XXXX  Q)QUIT                                                                         XXXX"
			  << std::endl
			  << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
			  << std::endl;
}

/////    MISC    \\\\\

void clearscreen(){
	std::cout << std::string(55,'\n');
}
