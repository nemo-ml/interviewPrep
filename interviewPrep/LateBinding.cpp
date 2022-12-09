/*
Late Binding : (Run time polymorphism) In this, the compiler adds code that identifies
the kind of object at runtime then matches the call with the right function
definition(Refer this for details).This can be achieved by declaring a virtual function.
*/

// CPP Program to illustrate late binding

#include <iostream>

class Base
{
public:
	virtual void show()
	{
	std::cout << "Inside Base Class \n";
	}
};

class Derived: public Base
{
public:
	void show()
	{
		std::cout << "Inside Derived Class \n";
	}
};

int main(void)
{
	Base* bp = new Derived;
	bp->show();					// RUN-TIME POLYMORPHISM

	return 0;
}