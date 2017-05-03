#include "parent.h"


class Dead: public Egg {
public:

	
	Dead(Baby a): 
	Egg(a.get_age(), 
		a.get_weight(), 
		a.get_happiness(), 
		a.get_hunger(), 
		a.get_feed(),
		a.get_poop(), 
		a.get_sick(), 
		a.get_sick_count(), 
		a.get_med_count(),
		a.get_name(), 
		true) {} 

	Dead(Kid a): 
	Egg(a.get_age(), 
		a.get_weight(), 
		a.get_happiness(), 
		a.get_hunger(), 
		a.get_feed(),
		a.get_poop(), 
		a.get_sick(), 
		a.get_sick_count(), 
		a.get_med_count(),
		a.get_name(), 
		true) {} 

	Dead(Teen a): 
	Egg(a.get_age(), 
		a.get_weight(), 
		a.get_happiness(), 
		a.get_hunger(), 
		a.get_feed(),
		a.get_poop(), 
		a.get_sick(), 
		a.get_sick_count(), 
		a.get_med_count(),
		a.get_name(), 
		true) {} 

	Dead(Adult a): 
	Egg(a.get_age(), 
		a.get_weight(), 
		a.get_happiness(), 
		a.get_hunger(), 
		a.get_feed(),
		a.get_poop(), 
		a.get_sick(), 
		a.get_sick_count(), 
		a.get_med_count(),
		a.get_name(), 
		true) {} 

	Dead(Parent a): 
	Egg(a.get_age(), 
		a.get_weight(), 
		a.get_happiness(), 
		a.get_hunger(), 
		a.get_feed(),
		a.get_poop(), 
		a.get_sick(), 
		a.get_sick_count(), 
		a.get_med_count(),
		a.get_name(), 
		true) {} 
};
















