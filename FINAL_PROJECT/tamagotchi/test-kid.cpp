#include "parent.h"



int main(){
	Egg a("Bob");
	a.display();
	std::cout << std::endl;
	Baby b(a);
	b.display();
	std::cout << std::endl;
	Kid c(b);
	c.display();
	std::cout << std::endl;
	Teen d(c);
	d.display();
	std::cout << std::endl;
	Adult e(d);
	e.display();
	std::cout << std::endl;
	Parent f(e);
	f.display();
	std::cout<<std::endl;
	std::cout<< e.get_name() <<std::endl;


}














