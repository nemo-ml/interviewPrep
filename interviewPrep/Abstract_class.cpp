/*
//What is a pure virtual function ?

A pure virtual function (or abstract function) in C++ is a virtual function for which we don’t
have implementation, we only declare it.

A pure virtual function is declared by assigning 0 in declaration.See the following example.

// An abstract class

class Test {
    // Data members of class
public:
    // Pure Virtual Function
    virtual void show() = 0;

    // Other members 
};
*/

/*
2. What is abstract class ?
A class which contains atleast one pure virtual function, is known as abstract class.

see the following example

// An abstract class

class Test 
{
public:                             // Data members of class
    virtual void show() = 0;        // Pure Virtual Function
    // Other members 
};
In above example, Test is an abstract class because it has a pure virtual function.
*/

#include<iostream>

class Test
{
    int X;
public:
    virtual void show() = 0;             // Pure virtual functions make a class abstract
    int getX() { return X; }
};

int main(void)
{
    Test testObject;                    // Object Cant Create of Abstract Class
    return 0;
}

/*
Output :
Compiler Error: cannot declare variable 't' to be of abstract type 'Test' because the following
virtual functions are pure within 'Test': note: virtual void Test::show()
*/

// We can have pointers and references of abstract class type.
// For example the following program works fine.

class Base
{
public:
    virtual void show() = 0;
};

class Derived : public Base
{
public:
    void show() { std::cout << "In Derived Class\n" << std::endl; }
};

int main(void)
{
    Base noptrbaseObject;            // Cant Create Object of Abstract Class

    Derived derivedObject;          // Object is created for Derived Class

    Base* baseObject = new Derived;
    baseObject->show();
    return 0;
}

// Output: In Derived