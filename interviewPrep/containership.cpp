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
class second 
{
    first f;                // Creating object of first
};
* 
*/

#include<iostream>


class first
{
public:

};