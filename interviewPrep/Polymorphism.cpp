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

	void func(int X, int Y)				// Function with same name and 2 int parameters
	{
		std::cout << "Values of X and Y" << X << "," << Y << std::endl;
	}
};
	
int main()								// Driver code - Main Func
{
	Geeks geekObject;

	geekObject.func(7);					// Function being called depends on the parameters passed
										// func() is called with int value
	geekObject.func(7.25);				// func() is called with double value
	geekObject.func(14, 21);			// func() is called with 2 int values

	return 0;
}
/*
Explanation: In the above example, a single function named function func() acts differently in
three different situations, which is a property of polymorphism
*/

/* Operator Overloading:
C++ has the ability to provide the operators with a special meaning for a data type, this
ability is known as operator overloading. For example, we can make use of the addition operator 
(+) for string class to concatenate two strings. We know that the task of this operator is to add 
two operands. So a single operator ‘+’, when placed between integer operands, adds them and when 
placed between string operands, concatenates them.

Below is the C++ program to demonstrate operator overloading:
*/


// C++ program to demonstrate Operator Overloading or Compile-Time Polymorphism
class Complex
{
private:
	int real;
	int imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}

	// This is automatically called when '+' is used with between two Complex objects
	Complex operator+(const Complex& complexObject)
	{
		Complex res;
		res.real = real + complexObject.real;
		res.imag = imag + complexObject.imag;
		return res;
	}
	void print()
	{
		std::cout << real << " + i" <<
			imag << std::endl;
	}
};

int main()
{
	Complex c1(10, 5), c2(2, 4);

	Complex c3 = c1 + c2;					// An example call to "operator+"
	c3.print();
	return 0;
}

/*
Explanation:  In the above example, the operator ‘+’ is overloaded. Usually, this operator is
used to add two numbers (integers or floating point numbers), but here the operator is made to 
perform the addition of two imaginary or complex numbers.
*/

///////////////////////////////////////////////////////////////////////////////
/*
2. Runtime Polymorphism:
This type of polymorphism is achieved by Function Overriding.Late binding and dynamic polymorphism
are other names for runtime polymorphism.The function call is resolved at runtime in runtime
polymorphism.In contrast, with compile time polymorphism, the compiler determines which function 
call to bind to the object after deducing it at runtime.

A.Function Overriding:
Function Overriding occurs when a derived class has a definition for one of the member functions 
of the base class.That base function is said to be overridden.
*/

// Below is the C++ program to demonstrate function overriding: C++ program for function overriding
#include <stdc++.h>

class Base 
{
public:
	virtual void print()
	{
		std::cout << "print base class" << std::endl;
	}

	void show()
	{
		std::cout << "show base class" << std::endl;
	}
};

class Derived : public Base 
{
public:

	// print () is already virtual function in derived class, we could also declared as
	// virtual void print () explicitly
	void print()
	{
		std::cout << "print derived class" << std::endl;
	}

	void show()
	{
		std::cout << "show derived class" << std::endl;
	}
};

// Driver code
int main()
{
	Base* ptrBaseObject;
	Derived derivedObject;
	ptrBaseObject = &derivedObject;

	// Virtual function, binded at
	// runtime (Runtime polymorphism)
	ptrBaseObject->print();

	// Non-virtual function, binded
	// at compile time
	ptrBaseObject->show();

	return 0;
}