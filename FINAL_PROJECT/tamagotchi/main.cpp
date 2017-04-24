#include <iostream>
#include "transfer.h"
#include "display_functions.h"

int main() {
try{
	clearscreen();
	titleblock();
	empty_dialogue();
	Egg e("Swag");
	e.display();

	empty_ui();
	Baby b = hatch_egg(e);

	titleblock();
	empty_dialogue();
	b.display();
	//std::cout << b.get_name();
	//std::cout << " hatched from an egg?!?!? (Baby)" << std::endl;
	
	Kid k = baby_to_kid(b);
	if(k.get_death()){
		throw 'd';
	}

	titleblock();
	empty_dialogue();
	k.display();
	//ui();
	//std::cout << k.get_name();
	//std::cout << " is now a kid!! Pogchamp (Kid)" << std::endl;
	Teen t = kid_to_teen(k);

	if(t.get_death()){
		throw 'd';
	}

	titleblock();
	empty_dialogue();
	t.display();
	//ui();
	//std::cout << t.get_name();
	//std::cout << " is now a teen... :o (Teen)" << std::endl;
	Adult a = teen_to_adult(t);

	if(a.get_death()){
		throw 'd';
	}

	titleblock();
	empty_dialogue();
	a.display();
	//ui();
	//std::cout << t.get_name();
	//std::cout << " isnt an irritating teen anymore!! (Adult)" << std::endl;
	Parent p = adult_to_parent(a);

	if(p.get_death()){
		throw 'd';
	}

	titleblock();
	empty_dialogue();
	p.display();
	//ui();
	//std::cout << p.get_name();
	//std::cout << " is all grown up now T______T (Parent)" << std::endl;

	final_days(p);
}
catch (const char e){

	std::cout << "Tamagotchi is dead" << std::endl;

}
}
