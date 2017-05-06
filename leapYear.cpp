#include "stdafx.h"
#include <iostream>
#include <string>

// In practice, it's generally bad to bring in the entire namespace as it is what is called "polluting the global namespace"
// since everything in std is now also in the global. It's totally fine for these examples and everything so no worries there
using namespace std;

// Generally you want to keep variables as close to where they are used so I would put this one right before the cout below
// Having them in global scope like this means they can be changed from anywhere, even another file (this is called an 'extern')
// It's also wise to initialize all variables to a specific value otherwise it will have the value
// of whatever was in memory before (there are exceptions where it does get initialized and that is called 'static initialization')
int year;


int main()
{
	while (true)
	{
		cout << "Type a year: ";
		cin >> year;

		// For all of these cases, I would probably cache this into a boolean variable
		// Having lots of branching code like this makes the flow hard to follow. If you cache
		// everything into bools, you can have 1 if-check and an else to print out the statements
		// It also helps reduce the copy/paste so that you have this:
		//
		// if(divisibleByFour || divisibleByOneHundred || divisibleByFourHundred)
		// {
		//     cout << "This is a leap year!\n";
		// }
		// else
		// {
		//    count << "This is a NOT a leap year\n";
		// }
		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
				{
					// For the \n, you can look up std::endl as this is an endline character that is platform agnostic
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
