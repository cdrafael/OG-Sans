#ifndef BABY_H
#define BABY_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "egg.h"

//Base class for the tamagotchis
class Baby: public Egg {
private:
	//0-5 Baby, 6-10 Kid, 11-16 Teen, 17-22 Adult, 23+ Final Form
	// Put age in big while loop (age = actions)
	/*int age;
	float weight;
	int happiness;
	int hunger;
	int poop_count;
	bool sick;
	// Put sick_count in big while loop with age with if statement for
	// 	if (sick == true)
	// 		sick_count++;
	int sick_count;
	std::string name;*/

public:
	Baby(Egg a): 
	Egg(a.get_age(), 
		a.get_weight(), 
		a.get_happiness(), 
		a.get_starving(),
		a.get_hunger(), 
		a.get_feed(),
		a.get_poop(), 
		a.get_sick(), 
		a.get_sick_count(), 
		a.get_med_count(),
		a.get_name(), 
		a.get_death()) {} 

	/*int get_age() {return age;}
	void set_age(int a){age = a;}

	float get_weight() {return weight;}
	void set_weight(float w) {weight = w;}
	
	int get_happiness() {return happiness;}
	void set_happiness(int a){happiness = a;}
	
	int get_poop() {return poop_count;}
	void set_poop(int a){poop_count = a;}

	std::string get_name() {return name;}
	void set_name(std::string a){std::string = a;}

	bool get_sick() {return sick;}
	void set_sick(bool s) {sick = s;}

	int get_sick_count() {return sick_count;}
	void set_sick_count(int s) {sick_count = s;}


	void feed();
	void poop_check();
	void medicine();
	void clean();*/
	virtual void display();





};


#endif //BABY_H
