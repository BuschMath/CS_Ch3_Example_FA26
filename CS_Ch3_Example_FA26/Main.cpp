#include <iostream>

int main()
{
	char ch = char(-1 * (65 + 31));
	std::cout << "The character is: " << ch << std::endl;

	int num = 2147483647; // Maximum value for a 32-bit signed integer
	std::cout << "The number is: " << num << std::endl;
	std::cout << "The number + 1 is: " << num + 1 << std::endl; // This will cause an overflow

	unsigned int num2 = 2147483647; 
	std::cout << "The number is: " << num2 << std::endl;
	std::cout << "The number + 1 is: " << num2 + 1 << std::endl; 

	return 0;
}