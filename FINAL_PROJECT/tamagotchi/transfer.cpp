//Compile with g++ test-transfer.cpp sprites.cpp transfer.cpp egg.cpp

//TODO:
//	When you press quit is moves onto next stage
//	When it dies it goes through all stages until parent
//	Need to decrement hunger_count somehow, maybe through play??
//

#include "transfer.h"
#include "display_functions.h"
#include <unistd.h>

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
		if (input == '1') {
			//FEED
			b.feed();
			b.inc_age();
			b.poop_check();


			clearscreen();
			titleblock();
			dialogue(b.get_name().append( " was given food!"));
			b.display();
			ui();

		}

		if (input == '2') {

			//GAME
			clearscreen();
			b.game();

			b.dec_hunger();

			b.inc_age();
			b.inc_happiness();
			b.poop_check();

		}
	
		if (input == '3') {
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

		}

		if (input =='4') {
			//CLEAN
			b.inc_age();
			b.clean();

			clearscreen();
			titleblock();
			dialogue(b.get_name().append( " was cleaned!"));
			b.display();
			ui();

		}
		
		if(input == '5') {
			// MEDICINE
			
			b.inc_age();

			clearscreen();
			titleblock();

			if (b.get_sick() == false) {
				dialogue (b.get_name().append(" was not feeling sick, why did you give it medicine?"));
				b.medicine();
			}

			if (b.get_sick() == true) {
				b.medicine();
				dialogue(b.get_name().append(" was given medicine"));
			}

			b.display();
			ui();
		}

		if(input == '6') {
			//INFO
			clearscreen();
			titleblock();
			dialogue( "Info screen opened");
			b.display();
			info_ui(b.get_happiness(), b.get_hunger(), b.get_sick(), b.get_name(), b.get_age(), b.get_weight());

			char c;
			std::cin >> c;
			while (c != '6') {
				std::cin >> c;
			}

			clearscreen();
			titleblock();
			dialogue( "Info screen closed");
			b.display();
			ui();

		}
		
	       if(input == 'q') {	
			q = EOF;
			b.set_death(true);
		}

	       if(input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input && 'q'){		
			clearscreen();
			titleblock();
			dialogue("Not a valid command");
			b.display();
			ui();

		}
			sleep(3);

			clearscreen();
			titleblock();
			//If the tamagotchi is sick, not hungry and happy
			if (b.get_sick() == true &&  b.get_hunger() >= 1 && b.get_happiness() >= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks a little sick "));
			}

			//If the tamagotchi is sick, not hungry and not happy
			if (b.get_sick() == true &&  b.get_hunger() >= 1 && b.get_happiness() <= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks a little sick and not happy"));
			}

			//If the tamagotchi is sick, hungry and not happy
			else if (b.get_sick() == true && b.get_hunger() <= 1 && b.get_happiness() <= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks hungry and also looks a little sick"));
			}

			//If the tamagotchi is sick, hungry, and happy
			else if (b.get_sick() == true && b.get_hunger() <= 1 && b.get_happiness() >= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks hungry though"));
			}

			//If the tamagotchi is not sick, hungry, and not happy
			else if (b.get_sick() == false && b.get_hunger() <= 1 && b.get_happiness() <= 1) {
				dialogue(b.get_name().append( " looks hungry though, it also looks like it wants to play"));
			}

			//If the tamagotchi is not sick, hungry, and happy
			else if (b.get_sick() == false && b.get_hunger() <= 1  && b.get_happiness() >= 1) {
				dialogue(b.get_name().append( " looks hungry though"));
			}

			//If the tamagotchi is not sick, not hungry, and not happy
			else if (b.get_sick() == false && b.get_hunger() >= 1 && b.get_happiness() <= 1) {
				dialogue(b.get_name().append( " looks like it wants to play"));
			}

			//If the tamagotchi is not sick, not hungry, and happy
			else if (b.get_sick() == false && b.get_hunger() >= 1 && b.get_happiness() >= 1) {
				dialogue(b.get_name().append( " looks like its having a good time with you"));
			}
			
			b.display();
			ui();

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
		if (input == '1') {
			//FEED
			b.feed();
			b.inc_age();
			b.poop_check();


			clearscreen();
			titleblock();
			dialogue(b.get_name().append( " was given food!"));
			b.display();
			ui();

		}

		if (input == '2') {

			//GAME
			clearscreen();
			b.game();

			b.dec_hunger();

			b.inc_age();
			b.inc_happiness();
			b.poop_check();

		}
	
		if (input == '3') {
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

		}

		if (input =='4') {
			//CLEAN
			b.inc_age();
			b.clean();

			clearscreen();
			titleblock();
			dialogue(b.get_name().append( " was cleaned!"));
			b.display();
			ui();

		}
		
		if(input == '5') {
			// MEDICINE
			
			b.inc_age();

			clearscreen();
			titleblock();

			if (b.get_sick() == false) {
				dialogue (b.get_name().append(" was not feeling sick, why did you give it medicine?"));
				b.medicine();
			}

			if (b.get_sick() == true) {
				b.medicine();
				dialogue(b.get_name().append(" was given medicine"));
			}

			b.display();
			ui();
		}

		if(input == '6') {
			//INFO
			clearscreen();
			titleblock();
			dialogue( "Info screen opened");
			b.display();
			info_ui(b.get_happiness(), b.get_hunger(), b.get_sick(), b.get_name(), b.get_age(), b.get_weight());

			char c;
			std::cin >> c;
			while (c != '6') {
				std::cin >> c;
			}

			clearscreen();
			titleblock();
			dialogue( "Info screen closed");
			b.display();
			ui();

		}
		
	       if(input == 'q') {	
			q = EOF;
			b.set_death(true);
		}

	       if(input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input && 'q'){		
			clearscreen();
			titleblock();
			dialogue("Not a valid command");
			b.display();
			ui();

		}
			sleep(3);

			clearscreen();
			titleblock();
			//If the tamagotchi is sick, not hungry and happy
			if (b.get_sick() == true &&  b.get_hunger() >= 1 && b.get_happiness() >= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks a little sick "));
			}

			//If the tamagotchi is sick, not hungry and not happy
			else if (b.get_sick() == true &&  b.get_hunger() >= 1 && b.get_happiness() <= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks a little sick and not happy"));
			}

			//If the tamagotchi is sick, hungry and not happy
			else if (b.get_sick() == true && b.get_hunger() <= 1 && b.get_happiness() <= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks hungry and also looks a little sick"));
			}

			//If the tamagotchi is sick, hungry, and happy
			else if (b.get_sick() == true && b.get_hunger() <= 1 && b.get_happiness() >= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks hungry though"));
			}

			//If the tamagotchi is not sick, hungry, and not happy
			else if (b.get_sick() == false && b.get_hunger() <= 1 && b.get_happiness() <= 1) {
				dialogue(b.get_name().append( " looks hungry though, it also looks like it wants to play"));
			}

			//If the tamagotchi is not sick, hungry, and happy
			else if (b.get_sick() == false && b.get_hunger() <= 1  && b.get_happiness() >= 1) {
				dialogue(b.get_name().append( " looks hungry though"));
			}

			//If the tamagotchi is not sick, not hungry, and not happy
			else if (b.get_sick() == false && b.get_hunger() >= 1 && b.get_happiness() <= 1) {
				dialogue(b.get_name().append( " looks like it wants to play"));
			}

			//If the tamagotchi is not sick, not hungry, and happy
			else if (b.get_sick() == false && b.get_hunger() >= 1 && b.get_happiness() >= 1) {
				dialogue(b.get_name().append( " looks like its having a good time with you"));
			}
			
			b.display();
			ui();

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
		if (input == '1') {
			//FEED
			b.feed();
			b.inc_age();
			b.poop_check();


			clearscreen();
			titleblock();
			dialogue(b.get_name().append( " was given food!"));
			b.display();
			ui();

		}

		if (input == '2') {

			//GAME
			clearscreen();
			b.game();

			b.dec_hunger();

			b.inc_age();
			b.inc_happiness();
			b.poop_check();

		}
	
		if (input == '3') {
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

		}

		if (input =='4') {
			//CLEAN
			b.inc_age();
			b.clean();

			clearscreen();
			titleblock();
			dialogue(b.get_name().append( " was cleaned!"));
			b.display();
			ui();

		}
		
		if(input == '5') {
			// MEDICINE
			
			b.inc_age();

			clearscreen();
			titleblock();

			if (b.get_sick() == false) {
				dialogue (b.get_name().append(" was not feeling sick, why did you give it medicine?"));
				b.medicine();
			}

			if (b.get_sick() == true) {
				b.medicine();
				dialogue(b.get_name().append(" was given medicine"));
			}

			b.display();
			ui();
		}

		if(input == '6') {
			//INFO
			clearscreen();
			titleblock();
			dialogue( "Info screen opened");
			b.display();
			info_ui(b.get_happiness(), b.get_hunger(), b.get_sick(), b.get_name(), b.get_age(), b.get_weight());

			char c;
			std::cin >> c;
			while (c != '6') {
				std::cin >> c;
			}

			clearscreen();
			titleblock();
			dialogue( "Info screen closed");
			b.display();
			ui();

		}
		
	       if(input == 'q') {	
			q = EOF;
			b.set_death(true);
		}

	       if(input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input && 'q'){		
			clearscreen();
			titleblock();
			dialogue("Not a valid command");
			b.display();
			ui();

		}
			sleep(3);

			clearscreen();
			titleblock();
			//If the tamagotchi is sick, not hungry and happy
			if (b.get_sick() == true &&  b.get_hunger() >= 1 && b.get_happiness() >= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks a little sick "));
			}

			//If the tamagotchi is sick, not hungry and not happy
			else if (b.get_sick() == true &&  b.get_hunger() >= 1 && b.get_happiness() <= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks a little sick and not happy"));
			}

			//If the tamagotchi is sick, hungry and not happy
			else if (b.get_sick() == true && b.get_hunger() <= 1 && b.get_happiness() <= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks hungry and also looks a little sick"));
			}

			//If the tamagotchi is sick, hungry, and happy
			else if (b.get_sick() == true && b.get_hunger() <= 1 && b.get_happiness() >= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks hungry though"));
			}

			//If the tamagotchi is not sick, hungry, and not happy
			else if (b.get_sick() == false && b.get_hunger() <= 1 && b.get_happiness() <= 1) {
				dialogue(b.get_name().append( " looks hungry though, it also looks like it wants to play"));
			}

			//If the tamagotchi is not sick, hungry, and happy
			else if (b.get_sick() == false && b.get_hunger() <= 1  && b.get_happiness() >= 1) {
				dialogue(b.get_name().append( " looks hungry though"));
			}

			//If the tamagotchi is not sick, not hungry, and not happy
			else if (b.get_sick() == false && b.get_hunger() >= 1 && b.get_happiness() <= 1) {
				dialogue(b.get_name().append( " looks like it wants to play"));
			}

			//If the tamagotchi is not sick, not hungry, and happy
			else if (b.get_sick() == false && b.get_hunger() >= 1 && b.get_happiness() >= 1) {
				dialogue(b.get_name().append( " looks like its having a good time with you"));
			}
			
			b.display();
			ui();

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

		if (input == '1') {
			//FEED
			b.feed();
			b.inc_age();
			b.poop_check();


			clearscreen();
			titleblock();
			dialogue(b.get_name().append( " was given food!"));
			b.display();
			ui();

		}

		if (input == '2') {

			//GAME
			clearscreen();
			b.game();

			b.dec_hunger();

			b.inc_age();
			b.inc_happiness();
			b.poop_check();

		}
	
		if (input == '3') {
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

		}

		if (input =='4') {
			//CLEAN
			b.inc_age();
			b.clean();

			clearscreen();
			titleblock();
			dialogue(b.get_name().append( " was cleaned!"));
			b.display();
			ui();

		}
		
		if(input == '5') {
			// MEDICINE
			
			b.inc_age();

			clearscreen();
			titleblock();

			if (b.get_sick() == false) {
				dialogue (b.get_name().append(" was not feeling sick, why did you give it medicine?"));
				b.medicine();
			}

			if (b.get_sick() == true) {
				b.medicine();
				dialogue(b.get_name().append(" was given medicine"));
			}

			b.display();
			ui();
		}

		if(input == '6') {
			//INFO
			clearscreen();
			titleblock();
			dialogue( "Info screen opened");
			b.display();
			info_ui(b.get_happiness(), b.get_hunger(), b.get_sick(), b.get_name(), b.get_age(), b.get_weight());

			char c;
			std::cin >> c;
			while (c != '6') {
				std::cin >> c;
			}

			clearscreen();
			titleblock();
			dialogue( "Info screen closed");
			b.display();
			ui();

		}
		
	       if(input == 'q') {	
			q = EOF;
			b.set_death(true);
		}

	       if(input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input && 'q'){		
			clearscreen();
			titleblock();
			dialogue("Not a valid command");
			b.display();
			ui();

		}
			sleep(3);

			clearscreen();
			titleblock();
			//If the tamagotchi is sick, not hungry and happy
			if (b.get_sick() == true &&  b.get_hunger() >= 1 && b.get_happiness() >= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks a little sick "));
			}

			//If the tamagotchi is sick, not hungry and not happy
			else if (b.get_sick() == true &&  b.get_hunger() >= 1 && b.get_happiness() <= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks a little sick and not happy"));
			}

			//If the tamagotchi is sick, hungry and not happy
			else if (b.get_sick() == true && b.get_hunger() <= 1 && b.get_happiness() <= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks hungry and also looks a little sick"));
			}

			//If the tamagotchi is sick, hungry, and happy
			else if (b.get_sick() == true && b.get_hunger() <= 1 && b.get_happiness() >= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks hungry though"));
			}

			//If the tamagotchi is not sick, hungry, and not happy
			else if (b.get_sick() == false && b.get_hunger() <= 1 && b.get_happiness() <= 1) {
				dialogue(b.get_name().append( " looks hungry though, it also looks like it wants to play"));
			}

			//If the tamagotchi is not sick, hungry, and happy
			else if (b.get_sick() == false && b.get_hunger() <= 1  && b.get_happiness() >= 1) {
				dialogue(b.get_name().append( " looks hungry though"));
			}

			//If the tamagotchi is not sick, not hungry, and not happy
			else if (b.get_sick() == false && b.get_hunger() >= 1 && b.get_happiness() <= 1) {
				dialogue(b.get_name().append( " looks like it wants to play"));
			}

			//If the tamagotchi is not sick, not hungry, and happy
			else if (b.get_sick() == false && b.get_hunger() >= 1 && b.get_happiness() >= 1) {
				dialogue(b.get_name().append( " looks like its having a good time with you"));
			}
			
			b.display();
			ui();

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
		if (input == '1') {
			//FEED
			b.feed();
			b.inc_age();
			b.poop_check();


			clearscreen();
			titleblock();
			dialogue(b.get_name().append( " was given food!"));
			b.display();
			ui();

		}

		if (input == '2') {

			//GAME
			clearscreen();
			b.game();

			b.dec_hunger();

			b.inc_age();
			b.inc_happiness();
			b.poop_check();

		}
	
		if (input == '3') {
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

		}

		if (input =='4') {
			//CLEAN
			b.inc_age();
			b.clean();

			clearscreen();
			titleblock();
			dialogue(b.get_name().append( " was cleaned!"));
			b.display();
			ui();

		}
		
		if(input == '5') {
			// MEDICINE
			
			b.inc_age();

			clearscreen();
			titleblock();

			if (b.get_sick() == false) {
				dialogue (b.get_name().append(" was not feeling sick, why did you give it medicine?"));
				b.medicine();
			}

			if (b.get_sick() == true) {
				b.medicine();
				dialogue(b.get_name().append(" was given medicine"));
			}

			b.display();
			ui();
		}

		if(input == '6') {
			//INFO
			clearscreen();
			titleblock();
			dialogue( "Info screen opened");
			b.display();
			info_ui(b.get_happiness(), b.get_hunger(), b.get_sick(), b.get_name(), b.get_age(), b.get_weight());

			char c;
			std::cin >> c;
			while (c != '6') {
				std::cin >> c;
			}

			clearscreen();
			titleblock();
			dialogue( "Info screen closed");
			b.display();
			ui();

		}
		
	       if(input == 'q') {	
			q = EOF;
			b.set_death(true);
		}

	       if(input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input && 'q'){		
			clearscreen();
			titleblock();
			dialogue("Not a valid command");
			b.display();
			ui();

		}
			sleep(3);

			clearscreen();
			titleblock();
			//If the tamagotchi is sick, not hungry and happy
			if (b.get_sick() == true &&  b.get_hunger() >= 1 && b.get_happiness() >= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks a little sick "));
			}

			//If the tamagotchi is sick, not hungry and not happy
			else if (b.get_sick() == true &&  b.get_hunger() >= 1 && b.get_happiness() <= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks a little sick and not happy"));
			}

			//If the tamagotchi is sick, hungry and not happy
			else if (b.get_sick() == true && b.get_hunger() <= 1 && b.get_happiness() <= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks hungry and also looks a little sick"));
			}

			//If the tamagotchi is sick, hungry, and happy
			else if (b.get_sick() == true && b.get_hunger() <= 1 && b.get_happiness() >= 1) {
				b.inc_sick_count();
				b.dec_happiness();
				dialogue(b.get_name().append( " looks hungry though"));
			}

			//If the tamagotchi is not sick, hungry, and not happy
			else if (b.get_sick() == false && b.get_hunger() <= 1 && b.get_happiness() <= 1) {
				dialogue(b.get_name().append( " looks hungry though, it also looks like it wants to play"));
			}

			//If the tamagotchi is not sick, hungry, and happy
			else if (b.get_sick() == false && b.get_hunger() <= 1  && b.get_happiness() >= 1) {
				dialogue(b.get_name().append( " looks hungry though"));
			}

			//If the tamagotchi is not sick, not hungry, and not happy
			else if (b.get_sick() == false && b.get_hunger() >= 1 && b.get_happiness() <= 1) {
				dialogue(b.get_name().append( " looks like it wants to play"));
			}

			//If the tamagotchi is not sick, not hungry, and happy
			else if (b.get_sick() == false && b.get_hunger() >= 1 && b.get_happiness() >= 1) {
				dialogue(b.get_name().append( " looks like its having a good time with you"));
			}
			
			b.display();
			ui();

	}

	clearscreen();
	titleblock();
	dialogue(" When you woke up the next morning you realized your baby was gone. You found a note on the table saying 'Its time for me to go home' (He/she probably got tired of you) GAMEOVER");
	display_blank();
	empty_ui();

}
