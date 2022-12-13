/*
Friend Class A friend class can access privateand protected members of other class in which
it is declared as friend.It is sometimes useful to allow a particular class to access private
members of other class.For example, a LinkedList class may be allowed to access private
members of Node. A friend class can access both privateand protected members of the class
in which it has been declared as friend
*/

#include <iostream>

class A
{
private:
	int X;
public:
	A()
	{
		X = 10;
	}
	friend class B;
};

class B
{
public:
	void display(A& t)
	{
		std::cout << "The value is:" << t.X << std::endl;
	}
};

int main()
{
	A aObject;
	B bObject;
	bObject.display(aObject);

	return 0;
}