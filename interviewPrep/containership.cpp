/*
* 
* Containership:
When an object of one class is created into another class then that object will be a member of 
that class, this type of relationship between the classes is known as containership or has_a 
relationship as one class contains the object of another class.

The class which contains the object and members of another class in this kind of relationship is 
called a container class and the object that is part of another object is called a contained object
whereas the object that contains another object as its part or attribute is called a container object.
*
* 
// Class that is to be contained

class first 
{  
    // Class Definition
};
  
// Container class
class Second 
{
    first f;                // Creating object of first
};
* 
*/

#include<iostream>


class First
{
public:
    void showf()
    {
        std::cout << "Hello From First Class\n" << std::endl;
    }
};

// Container Class 
class Second
{
    First f;
public:
    Second()
    {
        f.showf();
    }
};

int main()
{
    Second s;
}

/*
We can create an object of one class into another and that object will be a member of the class.
This type of relationship between classes is known as containership or has_a relationship as one
class contain the object of another class. And the class which contains the object and members of
another class in this kind of relationship is called a container class.

The object that is part of another object is called contained object, whereas object that contains 
another object as its part or attribute is called container object.

Containership
-> When features of existing class are wanted inside your new class, but, not its interface 
-> for eg:

1)computer system has a hard disk.
2)car has an Engine, chassis, steering wheels.

*/