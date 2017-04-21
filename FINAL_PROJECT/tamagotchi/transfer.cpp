//Compile with g++ test-transfer.cpp sprites.cpp transfer.cpp egg.cpp

//TODO:
//	When you press quit is moves onto next stage
//	When it dies it goes through all stages until parent
//	Need to decrement hunger_count somehow, maybe through play??
//

#include "transfer.h"

Baby hatch_egg(Egg e) {

	char input;
	int count = 0;

	std::cout << "SMASH THAT A BUTTON 5 TIMES" << std::endl;
	
	while (count <= 4) {
		std::cin >> input;
		switch(input) {
			case 'a':
				count++;
				break;
			default:
				break;
		}
	}

	Baby b(e);

	return b;
}


Kid baby_to_kid(Baby b) {

	char input;
	char q;

	while (b.get_age() <= 5 && q != EOF && b.get_death() != true) {
		std::cin >> input;
		switch(input)  {
			case '1': 
				std::cout << "FEED" << std::endl;
				b.feed();
				b.set_age(b.get_age() + 1);
				b.poop_check();
				if (b.get_sick() == true) {
					b.set_sick_count(b.get_sick() + 1);
				}

				std::cout << "Age: " << b.get_age() << std::endl;
				std::cout << "Hunger: " << b.get_hunger() << std::endl;
				std::cout << "Poop: " << b.get_poop() << std::endl;
				std::cout << "Feed count: " << b.get_feed() << std::endl;
				std::cout << "Sick count: " << b.get_sick_count() << std::endl;
				std::cout << "Sick? " << b.get_sick() << std::endl;
				std::cout << "Dead? " << b.get_death() << std::endl;
				break;
			
			case '2': 
				std::cout << "GAME" << std::endl;
				b.set_age(b.get_age() + 1);
				b.poop_check();
				if (b.get_sick() == true) {
					b.set_sick_count(b.get_sick() + 1);
				}
				std::cout << "Age: " << b.get_age() << std::endl;
				break;

			case '3': 
				std::cout << "LIGHT??" << std::endl;
				break;

			case '4': 
				std::cout << "CLEAN" << std::endl;
				b.set_age(b.get_age() + 1);
				b.clean();
				//Chance for it to poop again after cleaning??
				b.poop_check();
				if (b.get_sick() == true) {
					b.set_sick_count(b.get_sick() + 1);
				}
				std::cout << "Age: " << b.get_age() << std::endl;
				std::cout << "Poop: " << b.get_poop() << std::endl;
				break;

			case '5': 
				b.medicine();
				std::cout << "MEDICINE" << std::endl;

				std::cout << "Age: " << b.get_age() << std::endl;
				std::cout << "Sick count: " << b.get_sick_count() << std::endl;
				std::cout << "Sick? " << b.get_sick() << std::endl;
				std::cout << "Med count" << b.get_med_count() << std::endl;



				break;

			case '6': 
				std::cout << "INFO" << std::endl;
				break;

			//Doenst Work
			case 'q': 
				std::cout << "QUIT" << std::endl;
				q = EOF;
				break;
			
			default:
				std::cout << "Not a valid command" << std::endl;
				break;
		}
	}
	
	Kid k(b);

	return k;
}

Teen kid_to_teen(Kid k) {

	char input;
	char q;

	while (k.get_age() <= 10 && q != EOF && k.get_death() != true) {
		std::cin >> input;
		switch(input)  {
			case '1': 
				std::cout << "FEED" << std::endl;
				k.feed();
				k.set_age(k.get_age() + 1);
				k.poop_check();
				if (k.get_sick() == true) {
					k.set_sick_count(k.get_sick() + 1);
				}

				std::cout << "Age: " << k.get_age() << std::endl;
				std::cout << "Hunger: " << k.get_hunger() << std::endl;
				std::cout << "Poop: " << k.get_poop() << std::endl;
				std::cout << "Feed count: " << k.get_feed() << std::endl;
				std::cout << "Sick count: " << k.get_sick_count() << std::endl;
				std::cout << "Sick? " << k.get_sick() << std::endl;
				std::cout << "Dead? " << k.get_death() << std::endl;
				break;
			
			case '2': 
				std::cout << "GAME" << std::endl;
				k.set_age(k.get_age() + 1);
				k.poop_check();
				if (k.get_sick() == true) {
					k.set_sick_count(k.get_sick() + 1);
				}
				std::cout << "Age: " << k.get_age() << std::endl;
				break;

			case '3': 
				std::cout << "LIGHT??" << std::endl;
				break;

			case '4': 
				std::cout << "CLEAN" << std::endl;
				k.set_age(k.get_age() + 1);
				k.clean();
				//Chance for it to poop again after cleaning??
				k.poop_check();
				if (k.get_sick() == true) {
					k.set_sick_count(k.get_sick() + 1);
				}
				std::cout << "Age: " << k.get_age() << std::endl;
				std::cout << "Poop: " << k.get_poop() << std::endl;
				break;

			case '5': 
				k.medicine();
				std::cout << "MEDICINE" << std::endl;

				std::cout << "Age: " << k.get_age() << std::endl;
				std::cout << "Sick count: " << k.get_sick_count() << std::endl;
				std::cout << "Sick? " << k.get_sick() << std::endl;
				std::cout << "Med count" << k.get_med_count() << std::endl;
				break;

			case '6': 
				std::cout << "INFO" << std::endl;
				break;

			//Doesnt work
			case 'q': 
				std::cout << "QUIT" << std::endl;
				q = EOF;
				break;
			
			default:
				std::cout << "Not a valid command" << std::endl;
				break;
		}
	}
	
	Teen t(k);

	return t;
}

Adult teen_to_adult(Teen t) {

	char input;
	char q;

	while (t.get_age() <= 16 && q != EOF && t.get_death() != true) {
		std::cin >> input;
		switch(input)  {
			case '1': 
				std::cout << "FEED" << std::endl;
				t.feed();
				t.set_age(t.get_age() + 1);
				t.poop_check();
				if (t.get_sick() == true) {
					t.set_sick_count(t.get_sick() + 1);
				}

				std::cout << "Age: " << t.get_age() << std::endl;
				std::cout << "Hunger: " << t.get_hunger() << std::endl;
				std::cout << "Poop: " << t.get_poop() << std::endl;
				std::cout << "Feed count: " << t.get_feed() << std::endl;
				std::cout << "Sick count: " << t.get_sick_count() << std::endl;
				std::cout << "Sick? " << t.get_sick() << std::endl;
				std::cout << "Dead? " << t.get_death() << std::endl;
				break;
			
			case '2': 
				std::cout << "GAME" << std::endl;
				t.set_age(t.get_age() + 1);
				t.poop_check();
				if (t.get_sick() == true) {
					t.set_sick_count(t.get_sick() + 1);
				}
				std::cout << "Age: " << t.get_age() << std::endl;
				break;

			case '3': 
				std::cout << "LIGHT??" << std::endl;
				break;

			case '4': 
				std::cout << "CLEAN" << std::endl;
				t.set_age(t.get_age() + 1);
				t.clean();
				//Chance for it to poop again after cleaning??
				t.poop_check();
				if (t.get_sick() == true) {
					t.set_sick_count(t.get_sick() + 1);
				}
				std::cout << "Age: " << t.get_age() << std::endl;
				std::cout << "Poop: " << t.get_poop() << std::endl;
				break;

			case '5': 
				t.medicine();
				std::cout << "MEDICINE" << std::endl;

				std::cout << "Age: " << t.get_age() << std::endl;
				std::cout << "Sick count: " << t.get_sick_count() << std::endl;
				std::cout << "Sick? " << t.get_sick() << std::endl;
				std::cout << "Med count" << t.get_med_count() << std::endl;
				break;

			case '6': 
				std::cout << "INFO" << std::endl;
				break;

			//Doesnt work
			case 'q': 
				std::cout << "QUIT" << std::endl;
				q = EOF;
				break;
			
			default:
				std::cout << "Not a valid command" << std::endl;
				break;
		}
	}
	
	Adult a(t);

	return a;
}
Parent adult_to_parent(Adult a) {

	char input;
	char q;

	while (a.get_age() <= 22 && q != EOF && a.get_death() != true) {
		std::cin >> input;
		switch(input)  {
			case '1': 
				std::cout << "FEED" << std::endl;
				a.feed();
				a.set_age(a.get_age() + 1);
				a.poop_check();
				if (a.get_sick() == true) {
					a.set_sick_count(a.get_sick() + 1);
				}

				std::cout << "Age: " << a.get_age() << std::endl;
				std::cout << "Hunger: " << a.get_hunger() << std::endl;
				std::cout << "Poop: " << a.get_poop() << std::endl;
				std::cout << "Feed count: " << a.get_feed() << std::endl;
				std::cout << "Sick count: " << a.get_sick_count() << std::endl;
				std::cout << "Sick? " << a.get_sick() << std::endl;
				std::cout << "Dead? " << a.get_death() << std::endl;
				break;
			
			case '2': 
				std::cout << "GAME" << std::endl;
				a.set_age(a.get_age() + 1);
				a.poop_check();
				if (a.get_sick() == true) {
					a.set_sick_count(a.get_sick() + 1);
				}
				std::cout << "Age: " << a.get_age() << std::endl;
				break;

			case '3': 
				std::cout << "LIGHT??" << std::endl;
				break;

			case '4': 
				std::cout << "CLEAN" << std::endl;
				a.set_age(a.get_age() + 1);
				a.clean();
				//Chance for it to poop again after cleaning??
				a.poop_check();
				if (a.get_sick() == true) {
					a.set_sick_count(a.get_sick() + 1);
				}
				std::cout << "Age: " << a.get_age() << std::endl;
				std::cout << "Poop: " << a.get_poop() << std::endl;
				break;

			case '5': 
				a.medicine();
				std::cout << "MEDICINE" << std::endl;

				std::cout << "Age: " << a.get_age() << std::endl;
				std::cout << "Sick count: " << a.get_sick_count() << std::endl;
				std::cout << "Sick? " << a.get_sick() << std::endl;
				std::cout << "Med count" << a.get_med_count() << std::endl;
				break;

			case '6': 
				std::cout << "INFO" << std::endl;
				break;

			//Doenst work
			case 'q': 
				std::cout << "QUIT" << std::endl;
				q = EOF;
				break;
			
			default:
				std::cout << "Not a valid command" << std::endl;
				break;
		}
	}
	
	Parent p(a);

	return p;
}
void final_days(Parent p) {

	char input;
	char q;

	while (p.get_age() <= 30 && q != EOF && p.get_death() != true) {
		std::cin >> input;
		switch(input)  {
			case '1': 
				std::cout << "FEED" << std::endl;
				p.feed();
				p.set_age(p.get_age() + 1);
				p.poop_check();
				if (p.get_sick() == true) {
					p.set_sick_count(p.get_sick() + 1);
				}

				std::cout << "Age: " << p.get_age() << std::endl;
				std::cout << "Hunger: " << p.get_hunger() << std::endl;
				std::cout << "Poop: " << p.get_poop() << std::endl;
				std::cout << "Feed count: " << p.get_feed() << std::endl;
				std::cout << "Sick count: " << p.get_sick_count() << std::endl;
				std::cout << "Sick? " << p.get_sick() << std::endl;
				std::cout << "Dead? " << p.get_death() << std::endl;
				break;
			
			case '2': 
				std::cout << "GAME" << std::endl;
				p.set_age(p.get_age() + 1);
				p.poop_check();
				if (p.get_sick() == true) {
					p.set_sick_count(p.get_sick() + 1);
				}
				std::cout << "Age: " << p.get_age() << std::endl;
				break;

			case '3': 
				std::cout << "LIGHT??" << std::endl;
				break;

			case '4': 
				std::cout << "CLEAN" << std::endl;
				p.set_age(p.get_age() + 1);
				p.clean();
				//Chance for it to poop again after cleaning??
				p.poop_check();
				if (p.get_sick() == true) {
					p.set_sick_count(p.get_sick() + 1);
				}
				std::cout << "Age: " << p.get_age() << std::endl;
				std::cout << "Poop: " << p.get_poop() << std::endl;
				break;

			case '5': 
				p.medicine();
				std::cout << "MEDICINE" << std::endl;

				std::cout << "Age: " << p.get_age() << std::endl;
				std::cout << "Sick count: " << p.get_sick_count() << std::endl;
				std::cout << "Sick? " << p.get_sick() << std::endl;
				std::cout << "Med count" << p.get_med_count() << std::endl;

			case '6': 
				std::cout << "INFO" << std::endl;
				break;

			//Doenst work
			case 'q': 
				std::cout << "QUIT" << std::endl;
				q = EOF;
				break;
			
			default:
				std::cout << "Not a valid command" << std::endl;
				break;
		}
	}
	
	std::cout << "Time for tama to go home" << std::endl;
}
