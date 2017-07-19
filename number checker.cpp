#include "stdafx.h"
#include <iostream>


int X;

int main()
{
	std::cout << "Enter a number between 1 and 10: ";
	std::cin >> X;

	if (X >= 1 && X <= 10)
	{
		switch (X)
		{
		case 1:
		case 3:
		case 5:
			std::cout << "That's a weird number\n";
			break;
		case 2:
			std::cout << "That's not the number I was expecting\n";
			break;
		case 4:
		case 6:
		case 9:
			std::cout << "I knew you were going to give me that number\n";
			break;
		}
	}
	else
	{
		std::cout << "Why would you type that number in?\n";
	}
}