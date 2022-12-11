// Implementation of Singleton Class in C++

// Implementation of Singleton Class in C++
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
