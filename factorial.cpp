#include "stdafx.h"
#include <iostream>
using std::endl;

int Y(int X)
{
	int Z;
	Z = X;
	if (X == 1)
	{
		return 1;
	}
	else
	{
		return Z * Y(X - 1);
	}
}


int main()
{
	int X;
	std::cout << "Enter the number: ";
	std::cin >> X;
	std::cout << Y(X);
	std::cout << endl;
	
}
