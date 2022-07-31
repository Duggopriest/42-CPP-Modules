#include "Array.h"

int	main( void )
{
	std::cout << "============================== Constructor  ==========================================\n";
	Array<int>			intArray;
	Array<std::string>	stringArray(10);
	Array<std::string>	otherStringArray;

	std::cout << "============================== assigning arrays ==========================================\n";

	stringArray[0] = "Hi";
	stringArray[1] = "Hello";
	stringArray[2] = "How are you?";
	stringArray[3] = "Fine and you?";
	stringArray[4] = "Doing great thanks!";
	stringArray[5] = "You're very welcome";

	std::cout << "intArray.size() = " << intArray.getSize() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.getSize() << std::endl;
	
	otherStringArray = stringArray;
	otherStringArray[3] = "I'm good, how about you?";

	std::cout << "============================== testing arrays (out of bounds) ==========================================\n";
	try
	{
		std::cout << stringArray[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << stringArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "============================== Deconstructors ==========================================\n";
	return 0;
}