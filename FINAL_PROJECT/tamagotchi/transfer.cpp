//Compile with g++ test-transfer.cpp sprites.cpp transfer.cpp egg.cpp

//TODO:
//	When you press quit is moves onto next stage
//	When it dies it goes through all stages until parent
//	Need to decrement hunger_count somehow, maybe through play??
//

#include "transfer.h"
#include "display_functions.h"

Baby hatch_egg(Egg e) {

	clearscreen();
	titleblock();
	dialogue("SMASH THAT A BUTTON 5 TIMES");
	e.display();
	empty_ui();

	char input;
	int count = 0;
	
	// Hit the 'a' key 5 times to hatch egg
	while (count <= 4) {
		clearscreen();
		titleblock();
		dialogue("SMASH THAT A BUTTON 5 TIMES");
		e.display();
		empty_ui();
		std::cin >> input;
		switch(input) {
			case 'a':
				count++;
				break;
			default:
				std::cout << "Thats not the a button" << std::endl;
				break;
		}
	}

	Baby b(e);

	return b;
}


Kid baby_to_kid(Baby b) {

	clearscreen();
	titleblock();
	dialogue(b.get_name().append( " hatched from the egg!!!"));
	b.display();


	char input;
	char q;
	ui();

	while (b.get_age() <= 5 && q != EOF && b.get_death() != true) {
		std::cin >> input;
		switch(input)  {
			case '1': 
				//FEED
				b.feed();
				b.set_age(b.get_age() + 1);
				b.poop_check();

				//If the tamagotchi is sick and not hungry
				if (b.get_sick() == true &&  b.get_hunger() > 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, yet also is feeling kind of sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is still hungry and sick
				if (b.get_sick() == true && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, but he/she still looks kind of hungry, also a little sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is still hungry and not sick
				if (b.get_sick() == false && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, he/she still looks hungry though"));
					b.display();
					ui();
				}

				else {
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, he/she looks happy"));
					b.display();
					ui();
				}
				break;
			
			case '2': 
				//GAME
				b.set_age(b.get_age() + 1);
				b.poop_check();
				if (b.get_sick() == true) {
					b.set_sick_count(b.get_sick() + 1);
				}
				break;

			case '3': 
				//LIGHT
				clearscreen();
				titleblock();
				dialogue( "It's dark");
				display_blank();
				ui();

				char a;
				std::cin >> a;
				while (a != '3') {
					std::cin >> a;
				}

				clearscreen();
				titleblock();
				dialogue( "You turned the light back on");
				b.display();
				ui();
				break;

			case '4': 
				//CLEAN
				b.set_age(b.get_age() + 1);
				b.clean();

				//If the tamagotchi is sick and not hungry
				if (b.get_sick() == true && b.get_hunger() > 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned, yet still feels kind of sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is sick and hungry
				if (b.get_sick() == true && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned, yet still feels kind of sick. He/she also looks hungry"));
					b.display();
					ui();
				}

				//If the tamagotchi is not sick and hungry
				if (b.get_sick() == false && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned. He/she also looks hungry"));
					b.display();
					ui();
				}

				else {
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " is happy that you cleaned him/her"));
					b.display();
					ui();
				}

				break;

			case '5': 
				// MEDICINE

				if (b.get_sick() == false) {
					clearscreen();
					titleblock();
					dialogue (b.get_name().append(" was not feeling sick, why did you give him/her medicine?"));
					b.display();
					ui();
					b.medicine();
				}

				if (b.get_sick() == true) {
					b.medicine();
					
					if (b.get_sick() == true) {
						clearscreen();
						titleblock();
						dialogue(b.get_name().append(" is still feeling a bit sick :( "));
						b.display();
						ui();
					}

					else {
						clearscreen();
						titleblock();
						dialogue(b.get_name().append(" is feeling better :D"));
						b.display();
						ui();
					}
				}

				break;

			case '6': 
				std::cout << "INFO" << std::endl;
				break;

			//Still gotta work on
			case 'q': 
				q = EOF;
				b.set_death(true);
				break;
			
			default:
				std::cout << "Not a valid command" << std::endl;
				break;
		}
	}
	Kid k(b);
	return k;
}

Teen kid_to_teen(Kid b) {

	clearscreen();
	titleblock();
	dialogue(b.get_name().append( " grew up into a kid, suh cuute"));
	b.display();


	char input;
	char q;
	ui();

	while (b.get_age() <= 10 && q != EOF && b.get_death() != true) {
		std::cin >> input;
		switch(input)  {
			case '1': 
				//FEED
				b.feed();
				b.set_age(b.get_age() + 1);
				b.poop_check();

				//If the tamagotchi is sick and not hungry
				if (b.get_sick() == true &&  b.get_hunger() > 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, yet also is feeling kind of sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is still hungry and sick
				if (b.get_sick() == true && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, but he/she still looks kind of hungry, also a little sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is still hungry and not sick
				if (b.get_sick() == false && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, he/she still looks hungry though"));
					b.display();
					ui();
				}

				else {
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, he/she looks happy"));
					b.display();
					ui();
				}
				break;
			
			case '2': 
				//GAME
				b.set_age(b.get_age() + 1);
				b.poop_check();
				if (b.get_sick() == true) {
					b.set_sick_count(b.get_sick() + 1);
				}
				break;

			case '3': 
				//LIGHT
				clearscreen();
				titleblock();
				dialogue( "It's dark");
				display_blank();
				ui();

				char a;
				std::cin >> a;
				while (a != '3') {
					std::cin >> a;
				}

				clearscreen();
				titleblock();
				dialogue( "You turned the light back on");
				b.display();
				ui();
				break;

			case '4': 
				//CLEAN
				b.set_age(b.get_age() + 1);
				b.clean();

				//If the tamagotchi is sick and not hungry
				if (b.get_sick() == true && b.get_hunger() > 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned, yet still feels kind of sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is sick and hungry
				if (b.get_sick() == true && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned, yet still feels kind of sick. He/she also looks hungry"));
					b.display();
					ui();
				}

				//If the tamagotchi is not sick and hungry
				if (b.get_sick() == false && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned. He/she also looks hungry"));
					b.display();
					ui();
				}

				else {
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " is happy that you cleaned him/her"));
					b.display();
					ui();
				}

				break;

			case '5': 
				// MEDICINE

				if (b.get_sick() == false) {
					clearscreen();
					titleblock();
					dialogue (b.get_name().append(" was not feeling sick, why did you give him/her medicine?"));
					b.display();
					ui();
					b.medicine();
				}

				if (b.get_sick() == true) {
					b.medicine();
					
					if (b.get_sick() == true) {
						clearscreen();
						titleblock();
						dialogue(b.get_name().append(" is still feeling a bit sick :( "));
						b.display();
						ui();
					}

					else {
						clearscreen();
						titleblock();
						dialogue(b.get_name().append(" is feeling better :D"));
						b.display();
						ui();
					}
				}

				break;

			case '6': 
				std::cout << "INFO" << std::endl;
				break;

			//Still gotta work on
			case 'q': 
				q = EOF;
				b.set_death(true);
				break;
			
			default:
				std::cout << "Not a valid command" << std::endl;
				break;
		}
	}
	Teen t(b);
	return t;
}

Adult teen_to_adult(Teen b) {

	clearscreen();
	titleblock();
	dialogue(b.get_name().append( " is now a teen T__T"));
	b.display();


	char input;
	char q;
	ui();

	while (b.get_age() <= 16 && q != EOF && b.get_death() != true) {
		std::cin >> input;
		switch(input)  {
			case '1': 
				//FEED
				b.feed();
				b.set_age(b.get_age() + 1);
				b.poop_check();

				//If the tamagotchi is sick and not hungry
				if (b.get_sick() == true &&  b.get_hunger() > 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, yet also is feeling kind of sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is still hungry and sick
				if (b.get_sick() == true && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, but he/she still looks kind of hungry, also a little sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is still hungry and not sick
				if (b.get_sick() == false && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, he/she still looks hungry though"));
					b.display();
					ui();
				}

				else {
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, he/she looks happy"));
					b.display();
					ui();
				}
				break;
			
			case '2': 
				//GAME
				b.set_age(b.get_age() + 1);
				b.poop_check();
				if (b.get_sick() == true) {
					b.set_sick_count(b.get_sick() + 1);
				}
				break;

			case '3': 
				//LIGHT
				clearscreen();
				titleblock();
				dialogue( "It's dark");
				display_blank();
				ui();

				char a;
				std::cin >> a;
				while (a != '3') {
					std::cin >> a;
				}

				clearscreen();
				titleblock();
				dialogue( "You turned the light back on");
				b.display();
				ui();
				break;

			case '4': 
				//CLEAN
				b.set_age(b.get_age() + 1);
				b.clean();

				//If the tamagotchi is sick and not hungry
				if (b.get_sick() == true && b.get_hunger() > 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned, yet still feels kind of sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is sick and hungry
				if (b.get_sick() == true && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned, yet still feels kind of sick. He/she also looks hungry"));
					b.display();
					ui();
				}

				//If the tamagotchi is not sick and hungry
				if (b.get_sick() == false && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned. He/she also looks hungry"));
					b.display();
					ui();
				}

				else {
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " is happy that you cleaned him/her"));
					b.display();
					ui();
				}

				break;

			case '5': 
				// MEDICINE

				if (b.get_sick() == false) {
					clearscreen();
					titleblock();
					dialogue (b.get_name().append(" was not feeling sick, why did you give him/her medicine?"));
					b.display();
					ui();
					b.medicine();
				}

				if (b.get_sick() == true) {
					b.medicine();
					
					if (b.get_sick() == true) {
						clearscreen();
						titleblock();
						dialogue(b.get_name().append(" is still feeling a bit sick :( "));
						b.display();
						ui();
					}

					else {
						clearscreen();
						titleblock();
						dialogue(b.get_name().append(" is feeling better :D"));
						b.display();
						ui();
					}
				}

				break;

			case '6': 
				std::cout << "INFO" << std::endl;
				break;

			//Still gotta work on
			case 'q': 
				q = EOF;
				b.set_death(true);
				break;
			
			default:
				std::cout << "Not a valid command" << std::endl;
				break;
		}
	}
	
	Adult a(b);
	return a;
}

Parent adult_to_parent(Adult b) {

	clearscreen();
	titleblock();
	dialogue(b.get_name().append( " graduated and is now a big adult now!!"));
	b.display();


	char input;
	char q;
	ui();

	while (b.get_age() <= 22 && q != EOF && b.get_death() != true) {
		std::cin >> input;
		switch(input)  {
			case '1': 
				//FEED
				b.feed();
				b.set_age(b.get_age() + 1);
				b.poop_check();

				//If the tamagotchi is sick and not hungry
				if (b.get_sick() == true &&  b.get_hunger() > 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, yet also is feeling kind of sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is still hungry and sick
				if (b.get_sick() == true && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, but he/she still looks kind of hungry, also a little sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is still hungry and not sick
				if (b.get_sick() == false && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, he/she still looks hungry though"));
					b.display();
					ui();
				}

				else {
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, he/she looks happy"));
					b.display();
					ui();
				}
				break;
			
			case '2': 
				//GAME
				b.set_age(b.get_age() + 1);
				b.poop_check();
				if (b.get_sick() == true) {
					b.set_sick_count(b.get_sick() + 1);
				}
				break;

			case '3': 
				//LIGHT
				clearscreen();
				titleblock();
				dialogue( "It's dark");
				display_blank();
				ui();

				char a;
				std::cin >> a;
				while (a != '3') {
					std::cin >> a;
				}

				clearscreen();
				titleblock();
				dialogue( "You turned the light back on");
				b.display();
				ui();
				break;

			case '4': 
				//CLEAN
				b.set_age(b.get_age() + 1);
				b.clean();

				//If the tamagotchi is sick and not hungry
				if (b.get_sick() == true && b.get_hunger() > 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned, yet still feels kind of sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is sick and hungry
				if (b.get_sick() == true && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned, yet still feels kind of sick. He/she also looks hungry"));
					b.display();
					ui();
				}

				//If the tamagotchi is not sick and hungry
				if (b.get_sick() == false && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned. He/she also looks hungry"));
					b.display();
					ui();
				}

				else {
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " is happy that you cleaned him/her"));
					b.display();
					ui();
				}

				break;

			case '5': 
				// MEDICINE

				if (b.get_sick() == false) {
					clearscreen();
					titleblock();
					dialogue (b.get_name().append(" was not feeling sick, why did you give him/her medicine?"));
					b.display();
					ui();
					b.medicine();
				}

				if (b.get_sick() == true) {
					b.medicine();
					
					if (b.get_sick() == true) {
						clearscreen();
						titleblock();
						dialogue(b.get_name().append(" is still feeling a bit sick :( "));
						b.display();
						ui();
					}

					else {
						clearscreen();
						titleblock();
						dialogue(b.get_name().append(" is feeling better :D"));
						b.display();
						ui();
					}
				}

				break;

			case '6': 
				std::cout << "INFO" << std::endl;
				break;

			//Still gotta work on
			case 'q': 
				q = EOF;
				b.set_death(true);
				break;
			
			default:
				std::cout << "Not a valid command" << std::endl;
				break;
		}
	}
	
	Parent p(b);
	return p;
}

void final_days(Parent b) {

	clearscreen();
	titleblock();
	dialogue(b.get_name().append( " has reached their final form pogchamp"));
	b.display();


	char input;
	char q;
	ui();

	while (b.get_age() <= 30 && q != EOF && b.get_death() != true) {
		std::cin >> input;
		switch(input)  {
			case '1': 
				//FEED
				b.feed();
				b.set_age(b.get_age() + 1);
				b.poop_check();

				//If the tamagotchi is sick and not hungry
				if (b.get_sick() == true &&  b.get_hunger() > 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, yet also is feeling kind of sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is still hungry and sick
				if (b.get_sick() == true && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, but he/she still looks kind of hungry, also a little sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is still hungry and not sick
				if (b.get_sick() == false && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, he/she still looks hungry though"));
					b.display();
					ui();
				}

				else {
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was given food, he/she looks happy"));
					b.display();
					ui();
				}
				break;
			
			case '2': 
				//GAME
				b.set_age(b.get_age() + 1);
				b.poop_check();
				if (b.get_sick() == true) {
					b.set_sick_count(b.get_sick() + 1);
				}
				break;

			case '3': 
				//LIGHT
				clearscreen();
				titleblock();
				dialogue( "It's dark");
				display_blank();
				ui();

				char a;
				std::cin >> a;
				while (a != '3') {
					std::cin >> a;
				}

				clearscreen();
				titleblock();
				dialogue( "You turned the light back on");
				b.display();
				ui();
				break;

			case '4': 
				//CLEAN
				b.set_age(b.get_age() + 1);
				b.clean();

				//If the tamagotchi is sick and not hungry
				if (b.get_sick() == true && b.get_hunger() > 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned, yet still feels kind of sick"));
					b.display();
					ui();
				}

				//If the tamagotchi is sick and hungry
				if (b.get_sick() == true && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned, yet still feels kind of sick. He/she also looks hungry"));
					b.display();
					ui();
				}

				//If the tamagotchi is not sick and hungry
				if (b.get_sick() == false && b.get_hunger() < 2) {
					b.set_sick_count(b.get_sick() + 1);
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " was cleaned. He/she also looks hungry"));
					b.display();
					ui();
				}

				else {
					clearscreen();
					titleblock();
					dialogue(b.get_name().append( " is happy that you cleaned him/her"));
					b.display();
					ui();
				}

				break;

			case '5': 
				// MEDICINE

				if (b.get_sick() == false) {
					clearscreen();
					titleblock();
					dialogue (b.get_name().append(" was not feeling sick, why did you give him/her medicine?"));
					b.display();
					ui();
					b.medicine();
				}

				if (b.get_sick() == true) {
					b.medicine();
					
					if (b.get_sick() == true) {
						clearscreen();
						titleblock();
						dialogue(b.get_name().append(" is still feeling a bit sick :( "));
						b.display();
						ui();
					}

					else {
						clearscreen();
						titleblock();
						dialogue(b.get_name().append(" is feeling better :D"));
						b.display();
						ui();
					}
				}

				break;

			case '6': 
				std::cout << "INFO" << std::endl;
				break;

			//Still gotta work on
			case 'q': 
				q = EOF;
				b.set_death(true);
				break;
			
			default:
				std::cout << "Not a valid command" << std::endl;
				break;
		}
	}
	
	clearscreen();
	titleblock();
	dialogue(" When you woke up the next morning you realized your baby was gone. You found a note on the table saying 'Its time for me to go home' (He/she probably got tired of you) GAMEOVER");
	display_blank();
	empty_ui();

}
