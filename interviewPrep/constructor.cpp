// Constructor Explainnation

#include <iostream>


class Constructor
{
public:
	Constructor()
	{
		std::cout << "Constructor Called! \n" << std::endl;
	}

	void PrintConstructor()
	{
		std::cout << "Print Function for Constructor Class Called!" << std::endl;
	}
};

int main()
{
	Constructor Object;
	Object.PrintConstructor();

	return 0;
}