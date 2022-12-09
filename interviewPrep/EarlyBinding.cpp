/** 
 Early Binding (compile - time time polymorphism) As the name indicates, compiler(or linker) 
 directly associate an address to the function call.It replaces the call with a machine language 
 instruction that tells the mainframe to leap to the address of the function.
 By default early binding happens in C++ 
 **/

 // CPP Program to illustrate early binding.
 // Any normal function call (without virtual) is binded early. Here we have taken base
 // and derived class example so that readers can easily compare and see difference in outputs.

#include <iostream>


class Base
{
public:
	void show()
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

int main()
{
	// CPP Program to illustrate early binding. Any normal function call (without virtual)
	// is binded early. Here we have taken base and derived class example so that readers
	// can easily compare and see difference in outputs.

	//Base bp;					// output: "Inside Base Class". No pointer used
	//bp.show();

	//Base* bp = new Base;		// output: "Inside Base Class". Pointer used
	//bp->show();

	//Base* bp = new Derived;		// output: "Inside Base Class". Pointer used
	//bp->show();

	Derived* dp = new Derived;		// output: "Inside Derived Class". Pointer used
	dp->show();

	return 0;
}