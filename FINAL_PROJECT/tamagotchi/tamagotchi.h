#ifndef TAMAGOTCHI_H
#define TAMAGOTCHI_H

#include <iostream>
#include <string>

class Tamagotchi {
private:
	int age;
	float weight;
	int happiness;
	int hunger;
	int health;
	int poop_count;
	std::string name;

public:
	Tamagotchi(std::string n): age(0), weight(1.0), happiness(0), 
		hunger(0), health(4), poop_count(0), name(n) {} 
	int get_age() {return age;}
	void set_age(int a){age = a;}
	float get_weight() {return weight;}
	void set_weight(float w) {weight = w;}
	
	int get_happiness() {return happiness;}
	void set_happiness(int a){happiness = a;}
	
	int get_poop() {return poop_count;}
	void set_poop(int a){poop_count = a;}

	std::string get_name() {return name;}
	void set_name(std::string a){std::string = a;}

	void feed();


};


#endif //TAMAGOTCHI_H
