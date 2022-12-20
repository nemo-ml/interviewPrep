/*
The word “polymorphism” means having many forms. In simple words, we can define polymorphism as 
the ability of a message to be displayed in more than one form.

A real-life example of polymorphism is a person who at the same time can have different characteristics.
A man at the same time is a father, a husband, and an employee. So the same person exhibits different
behavior in different situations. 

This is called polymorphism. Polymorphism is considered one of the important features of Object-Oriented
Programming.

Types of Polymorphism:
* Compile-time Polymorphism.
* Runtime Polymorphism.
*/

/* Compile-Time Polymorphism 
This type of polymorphism is achieved by function overloading or operator overloading.

* Function Overloading:
When there are multiple functions with the same name but different parameters, 
then the functions are said to be overloaded, hence this is known as Function Overloading.
Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.

In simple terms, it is a feature of object-oriented programming providing many functions to have the
same name but distinct parameters when numerous tasks are listed under one function name. 
There are certain Rules of Function Overloading that should be followed while overloading a function.

*/

// Below is the C++ program to show function overloading or compile-time polymorphism:
// C++ program to demonstrate function overloading or Compile-time Polymorphism

#include <iostream>


class Geeks
{
public:
	void func(int X)					// Function with 1 int parameter
	{
		std::cout << "Valuse of X" << X << std::endl;
	}

	void func(double X)					// Function with same name but 1 double parameter
	{
		std::cout << "Value of X" << X << std::endl;
	}

	void func(int X, int Y)
	{

	}
};