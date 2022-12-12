// Implementation of Singleton Class in C++

/* 
A singleton class is a special type of class in object - oriented 
programming which can have only one object or instance at a time.
In other words, we can instantiate only one instance of the singleton
class.The new variable also points to the initial instance created
if we attempt to instantiate the Singleton class after the first time.
This is implemented by using the core concepts of object - oriented
programming namely access modifiers, constructors& static methods.

Steps to Implement Singleton Class in C++:

1. Make all the constructors of the class private.
2. Delete the copy constructor of the class.
3. Make a private static pointer that can point to the same class object (singleton class).
4. Make a public static method that returns the pointer to the same class object (singleton class).
*/


//#include <bits/stdc++.h>
#include <iostream>



class Singleton {
private:
	std::string name, loves;			// member variables
	static Singleton*					// static pointer which will points 
										// to the instance of this class
		instancePtr;

	Singleton()							// Default constructor
	{  }

public:

	Singleton(const Singleton& obj)	= delete;		// deleting copy constructor

	/*
		getInstance() is a static method that returns an
		instance when it is invoked. It returns the same
		instance if it is invoked more than once as an instance
		of Singleton class is already created. It is static
		because we have to invoke this method without any object
		of Singleton class and static method can be invoked
		without object of class

		As constructor is private so we cannot create object of
		Singleton class without a static method as they can be
		called without objects. We have to create an instance of
		this Singleton class by using getInstance() method.
	*/
	static Singleton* getInstance()
	{
		// If there is no instance of class
		// then we can create an instance.
		if (instancePtr == NULL)
		{
			// We can access private members
			// within the class.
			instancePtr = new Singleton();

			// returning the instance pointer
			return instancePtr;
		}
		else
		{
			// if instancePtr != NULL that means
			// the class already have an instance.
			// So, we are returning that instance
			// and not creating new one.
			return instancePtr;
		}
	}

	// sets values of member variables.
	void setValues(std::string name, std::string loves)
	{
		this->name = name;
		this->loves = loves;
	}

	// prints values of member variables
	void print()
	{
		std::cout << name << " Loves " << loves << "." << std::endl;
	}
};

// initializing instancePtr with NULL
Singleton* Singleton::instancePtr = NULL;

// Driver code
int main()
{
	Singleton* OOPs_Concepts = Singleton::getInstance();

	// setting values of member variables.
	OOPs_Concepts->setValues("Nemo",
		"OOPs_Concepts");

	// printing values of member variables.
	OOPs_Concepts->print();
	std::cout << "Address of OOPs_Concepts: " << OOPs_Concepts << std::endl;
	std::cout << std::endl;

	Singleton* gfg = Singleton::getInstance();

	// setting values of member variables.
	gfg->setValues("Ani", "OOPs_Concepts");

	// Printing values of member variables.
	gfg->print();

	std::cout << "Address of gfg: " << gfg << std::endl;
	return 0;
}

/*
Explanation:

# Firstly, we made all the constructor private so that an instance of
the Singleton class can’t be instantiated from outside of it. 
# We deleted copy constructor so that copy of the instance cannot be created. 
# Created a static member instancePtrand initialized it with NULL.
# It points to the instance of Singleton class. 
# Created a getInstance() method which returns an instance of the Singleton class.
# It is a static method because static variables are accessed by only static methodsand we have to access instancePtr
which is a static member. If there already exists an instance of the Singleton 
class then getInstance() will return a pointer to that instance as we can have 
only one instance of the Singleton class. If instancePtr == NULL that means
there exists no instance of the Singleton class.So, getInstance() will instantiate 
an instance of the Singleton classand return a pointer to it. We cannot create an
instance of the Singleton class as all constructors are private.We have to use the 
getInstance() method to get an instance of it.
*/