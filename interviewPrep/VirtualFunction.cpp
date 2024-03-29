/*
* A virtual function is a member function which is declared within a base class and is re-defined 
(overridden) by a derived class. When you refer to a derived class object using a pointer or
a reference to the base class, you can call a virtual function for that object and execute the 
derived class�s version of the function. 

* Virtual functions ensure that the correct function is called for an object, regardless of the
type of reference (or pointer) used for function call.
* They are mainly used to achieve Runtime polymorphism Functions are declared with a virtual keyword 
in base class. 
* The resolving of function call is done at runtime.
* 
* Rules for Virtual Functions:
* Virtual functions cannot be static.
* A virtual function can be a friend function of another class.
* Virtual functions should be accessed using pointer or reference of base class type to achieve runtime
polymorphism.
* The prototype of virtual functions should be the same in the base as well as derived class.
* They are always defined in the base class and overridden in a derived class.
* It is not mandatory for the derived class to override (or re-define the virtual function),
in that case, the base class version of the function is used.
* A class may have virtual destructor but it cannot have a virtual constructor.
* 
* 
* 
* Compile time (early binding) VS runtime (late binding) behavior of Virtual Functions
* 
* Consider the following simple program showing runtime behavior of virtual functions.
* 
* CPP Programm to illustrate concept of Virtual Functions
*/

#include <iostream>

class Base
{
public:
	virtual void print()
	{
		std::cout << "Inside Base Class" << std::endl;
	}

	void show()
	{
		std::cout << "show base class" << std::endl;
	}
};

class Derived : public Base
{
public:
	void print()
	{
		std::cout << "Inside Derived Class" << std::endl;
	}

	void show()
	{
		std::cout << "Show Derived Class" << std::endl;
	}
};

int main()
{
	Base* bObjectPointer;			// Class object pointer 
	Derived dObject;
	bObjectPointer = &dObject;		// Initialization of reference variable

	bObjectPointer->print();		//  Virtual function, binded at runtime - Late Binding

	dObject.show();					// Show() function called to print derived class message

	bObjectPointer->show();			// Non-virtual function, binded at compile time - Early Binding

	return 0;
}

/*
Explanation:
Runtime polymorphism is achieved only through a pointer(or reference) of base class type.
Also, a base class pointer can point to the objects of base class as well as to the objects 
of derived class.In above code, base class pointer �bptr� contains the address of object �d� of 
derived class. Late binding(Runtime) is done in accordance with the content of 
pointer(i.e.location pointed to by pointer) and Early binding(Compile time) is done according
to the type of pointer, since print() function is declared with virtual keyword so it will be 
bound at runtime(output is print derived class as pointer is pointing to object of derived class) 
and show() is non - virtual so it will be bound during compile time(output is show base class as 
pointer is of base type). 

NOTE :
If we have created a virtual function in the base class and it is being overridden in
the derived class then we don�t need virtual keyword in the derived class,
functions are automatically considered as virtual functions in the derived class

*/