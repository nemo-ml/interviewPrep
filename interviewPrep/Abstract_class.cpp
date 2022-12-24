/*
//What is a pure virtual function ?
A pure virtual function(or abstract function) in C++ is a virtual function for which we don’t
have implementation, we only declare it.A pure virtual function is declared by assigning 0 in
declaration.See the following example.


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
A class which contains atleast one pure virtual function, is known as abstract class.see the
following example


// An abstract class
class Test {
    // Data members of class
public:
    // Pure Virtual Function
    virtual void show() = 0;

    // Other members 
};

in above example, Test is an abstract class because it has a pure virtual function.
*/

#include<iostream>