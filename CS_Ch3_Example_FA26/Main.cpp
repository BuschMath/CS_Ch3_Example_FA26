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

	std::cout << "Integer division 11 / 3 = " << 11 / 3 << std::endl; // Integer division
	std::cout << "Floating-point division 11.0 / 3.0 = " << 11.0 / 3.0 << std::endl; // Floating-point division
	std::cout << "Modulus operation 11 % 3 = " << 11 % 3 << std::endl; // Modulus operation

	return 0;
}