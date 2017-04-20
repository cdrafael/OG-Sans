#ifndef EGG_H
#define EGG_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//Base class for the tamagotchis
class Egg {
private:
	//0-5 Baby, 6-10 Kid, 11-16 Teen, 17-22 Adult, 23+ Final Form
	// Put age in big while loop (age = actions)
	int age;
	float weight;
	int happiness;
	int hunger;
	int poop_count;
	bool sick;
	// Put sick_count in big while loop with age with if statement for
	// 	if (sick == true)
	// 		sick_count++;
	int sick_count;
	std::string name;

public:
	Egg(std::string n): age(0), weight(1.0), happiness(0), 
		hunger(0), poop_count(0), sick(false), sick_count(0), name(n) {} 

	Egg(int a, float w, int hap, int h, int poop, bool s, int s_count, 
	std::string n): age(a), weight(w), happiness(hap), hunger(h), 
	poop_count(poop), sick(s), sick_count(s_count), name(n) {} 

	int get_age() {return age;}
	void set_age(int a){age = a;}

	float get_weight() {return weight;}
	void set_weight(float w) {weight = w;}
	
	int get_happiness() {return happiness;}
	void set_happiness(int a){happiness = a;}
	
	int get_hunger() {return hunger;}
	void set_hunger(int a){hunger = a;}
	
	int get_poop() {return poop_count;}
	void set_poop(int a){poop_count = a;}

	std::string get_name() {return name;}
	void set_name(std::string a){name = a;}

	bool get_sick() {return sick;}
	void set_sick(bool s) {sick = s;}

	int get_sick_count() {return sick_count;}
	void set_sick_count(int s) {sick_count = s;}


	void feed();
	void poop_check();
	void medicine();
	void clean();
	virtual void display();





};


#endif //EGG_H
