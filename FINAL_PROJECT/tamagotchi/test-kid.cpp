#include "adult.h"



int main(){
	Egg a("Bob");
	Baby b(a);
	Kid c(b);
	Teen d(c);
	Adult e(d);
	std::cout<< e.get_name() <<std::endl;

}














