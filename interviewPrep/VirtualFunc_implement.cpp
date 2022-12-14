
// C++ program to demonstrate how a virtual function
// is used in a real life scenario

class Employee
{
public:
	virtual void raiseSalary()
	{
		// Common raise salary code
	}

	virtual void promote()
	{
		// common promote code
	}
};

class Manager : public Employee
{
	virtual void raiseSalary()
	{
		// 
	}

	virtual void promote()
	{
		//
	}
};

/*
Limitations of Virtual Functions :

Slower: The function call takes slightly longer due to the virtual mechanismand makes 
it more difficult for the compiler to optimize because it does not know exactly which 
function is going to be called at compile time. Difficult to Debug : In a complex system,
virtual functions can make it a little more difficult to figure out where a function is
being called from.
*/