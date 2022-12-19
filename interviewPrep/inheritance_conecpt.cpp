/* Inheritance in C++

The capability of a class to derive propertiesand characteristics from another class is called 
Inheritance.Inheritance is one of the most important features of Object - Oriented Programming. 

Inheritance is a feature or a process in which, new classes are created from the existing classes.
The new class created is called “derived class” or “child class” and the existing class is known as 
the “base class” or “parent class”.The derived class now is said to be inherited from the base class.

When we say derived class inherits the base class, it means, the derived class
inherits all the properties of the base class, without changing the properties 
of base classand may add new features to its own.These new features in the 
derived class will not affect the base class.The derived class is the specialized
class for the base class.

Sub Class : The class that inherits properties from another class is called Subclass or Derived Class.

Super Class : The class whose properties are inherited by a subclass is called Base Class or Superclass.
*/

// Example: define member function without argument within the class

#include <iostream>

class Person
{
	int id;
	char name[100];

public:

	void set_p()
	{
		std::cout << "Enter the ID:" << std::endl;
		std::cin >> id;
		std::cout << "Enter the Name:" << std::endl;
		std::cin.get(name, 100);
	}

	void Display_p()
	{
		std::cout << name << "\t" << id << "\t" << std::endl;
	}
};

class Student : private Person
{
	char course[50];
	int fee;

public:

	void set_s()
	{
		set_p();
		std::cout << "Enter the Course Name:" << std::endl;
		std::cin.getline(course, 50);
		std::cout << "Enter the Course Fee:" << std::endl;
		std::cin >> fee;
	}

	void Display_s()
	{
		Display_p();
		std::cout << course << "\t" << fee << std::endl;
	}
};

int main()
{
	Student studentObject;

	studentObject.set_s();
	studentObject.Display_s();

	return 0;
}


// C++ program to demonstrate implementation of Inheritance
#include<bits/stdc++.h>				// Need to check this


class Parents						// Base Class 
{
public:

	int id_p;
};

class Child : public Parents		// Sub class inheriting from Base Class(Parent)
{
public:

	int id_c;
};

int main()							// main function
{
	Child childObject;				// An object of class child has all data members
									// and member functions of class parent
	childObject.id_c = 7;
	childObject.id_p = 10;

	std::cout << "Child id is: " << childObject.id_c << '\n' << std::endl;
	std::cout << "Parents id is: " << childObject.id_p << '\n' << std::endl;

	return 0;
}

/*
In the above program, the ‘Child’ class is publicly inherited from the ‘Parent’ class
so the public data members of the class ‘Parent’ will also be inherited by the class ‘Child’.

Modes of Inheritance: 
There are 3 modes of inheritance.

Public Mode: 
If we derive a subclass from a public base class. Then the public member of the base class will 
become public in the derived class and protected members of the base class will become protected
in the derived class.

Protected Mode: 
If we derive a subclass from a Protected base class. Then both public members and protected members 
of the base class will become protected in the derived class.

Private Mode:
If we derive a subclass from a Private base class. Then both public members and protected members of 
the base class will become Private in the derived class.

Note: The private members in the base class cannot be directly accessed in the derived class, 
while protected members can be directly accessed.

*/

class Derived : [virtual] [access - specifier] Base
{
	// member list
};
class Derived : [virtual] [access - specifier] Base1,

	[virtual][access - specifier] Base2, . .]
{
	// member list...
};