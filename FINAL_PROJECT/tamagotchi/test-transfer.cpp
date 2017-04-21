#include <iostream>
#include "transfer.h"

int main() {

	Egg e("Swag");
	e.display();

	Baby b = hatch_egg(e);

	b.display();
	std::cout << b.get_name();
	std::cout << " hatched from an egg?!?!? (Baby)" << std::endl;

	Kid k = baby_to_kid(b);

	k.display();
	std::cout << k.get_name();
	std::cout << " is now a kid!! Pogchamp (Kid)" << std::endl;

	Teen t = kid_to_teen(k);

	t.display();
	std::cout << t.get_name();
	std::cout << " is now a teen... :o (Teen)" << std::endl;

	Adult a = teen_to_adult(t);

	a.display();
	std::cout << t.get_name();
	std::cout << " isnt an irritating teen anymore!! (Adult)" << std::endl;

	Parent p = adult_to_parent(a);

	p.display();
	std::cout << p.get_name();
	std::cout << " is all grown up now T______T (Parent)" << std::endl;

	final_days(p);
}
