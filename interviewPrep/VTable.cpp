/*
Working of virtual functions (concept of VTABLE and VPTR)
As discussed here, if a class contains a virtual function then compiler itself does two things.

If object of that class is created then a virtual pointer (VPTR) is inserted as a data member of 
the class to point to VTABLE of that class. For each new object created, a new virtual pointer is 
inserted as a data member of that class. 

Irrespective of object is created or not, class contains as a member a static array of function 
pointers called VTABLE. Cells of this table store the address of each virtual function contained 
in that class.
*/

// CPP program to illustrate working of Virtual Functions

#include <iostream>

class Base
{
public:
	void func_1() { std::cout << "Base Class-1\n" << std::endl; }
	virtual void func_2() { std::cout << "Base Class-2\n" << std::endl; }
	virtual void func_3() { std::cout << "Base Class-3\n" << std::endl; }
	virtual void func_4() { std::cout << "Base Class-4\n" << std::endl; }
};

class Derived : public Base
{
public:
	void func_1() { std::cout << "Derived Class-1\n" << std::endl; }
	void func_2() { std::cout << "Derived Classd-2\n" << std::endl; }
	void func_4( int X ) { std::cout << "Derived Class-4\n" << std::endl; }
};

int main()
{
	Base* baseObject;			// Base Class Pointer Object Created (pointer_name)->(variable_name)
	Derived derivedObject;		// Object created 
	baseObject = &derivedObject;

	// (pointer_name)->(variable_name)
	baseObject->func_1();		// Early binding because fun1() is non-virtual in Base Class
	baseObject->func_2();		// Late binding RUN-TIME POLYMORPHISM (RTP)
	baseObject->func_3();		// Late binding RUN-TIME POLYMORPHISM (RTP)
	baseObject->func_4();
	derivedObject.func_4(5);
}
/*
Explanation:
Initially, we create a pointer of type base class and initialize it with the address of the derived 
class object. When we create an object of the derived class, the compiler creates a pointer as a data
member of the class containing the address of VTABLE of the derived class. 

Similar concept of Late and Early Binding is used as in above example. For fun_1() function call, base 
class version of function is called, fun_2() is overridden in derived class so derived class version is
called, fun_3() is not overridden in derived class and is virtual function so base class version is 
called, similarly fun_4() is not overridden so base class version is called.

NOTE: fun_4(int) in derived class is different from virtual function fun_4() in base class as prototypes
of both the functions are different.

*/