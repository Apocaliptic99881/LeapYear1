#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int year;


int main()
{
	while (true)
	{
		cout << "Type a year: ";
		cin >> year;

		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
				{
					cout << "That is a leap year!\n";
				}
				else
				{
					cout << "This is NOT a leap year\n";
				}
			}
			else
			{
				cout << "That is a leap year!\n";
			}
		}
		else
		{
			cout << "That is NOT a leap year!\n";
		}
	}
}