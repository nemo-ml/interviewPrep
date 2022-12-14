
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