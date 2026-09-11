#include <iostream>

int giveMe42();
float exampleFunction(int x, int y, float z);

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

	int x = 11;

	std::cout << "Integer division 11 / 3 = " << 11 / 3 << std::endl; // Integer division
	std::cout << "Floating-point division 11 / 3.0 = " << x / 3.0 << std::endl; // Floating-point division mixed mode expression.
	int y = float(x) / 3.0;
	std::cout << "Floating-point division assigned to int y = " << y << std::endl; // Floating-point division assigned to int
	std::cout << "Modulus operation 11 % 3 = " << 11 % 3 << std::endl; // Modulus operation

	std::cout << "The answer to life, the universe, and everything is: " << giveMe42() << std::endl;

	int a = 2, b = 3;
	float c = 4.5;
	std::cout << "The result of exampleFunction(" << a << ", " << b << ", " << c << ") is: " << exampleFunction(a, b, c) << std::endl;
	std::cout << "After calling exampleFunction, c is still: " << c << std::endl; // c is unchanged because it was passed by value

	return 0;
}

int giveMe42()
{
	int x = 0;

	x = x + 1;
	x = x + 1;
	x = x + 1;
	x = x + 1;
	x = x + 1;
	x = x + 1;
	x = x + 1;
	x = x + 1;
	x = x + 1;
	x = x + 1;

	return 42;
}

float exampleFunction(int x, int y, float z)
{
	z = 2 * x + 3 * y + z;

	return z;
}