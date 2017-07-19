#include <iostream>
#include <string>
using namespace std;

class PersonInfo {
public:
	PersonInfo()
	{
		askItAll();
	}

	int getAge()
	{
		return age;
	}
	string getName()
	{
		return name;
	}
	string getColor()
	{
		return color;
	}

	void askItAll()
	{
		cout << "What is your name? ";
		cin >> name;
		cout << "What is your age? ";
		cin >> age;
		cout << "What is your favourite color? ";
		cin >> color;
	}
private:
	string name;
	int age;
	string color;
};



int main()
{
	PersonInfo personObject;

	cout << "Hello " << personObject.getName() << ", you are " << personObject.getAge() << " and " << personObject.getColor() << " is you favorite colour" << endl;
	system("pause");

	return 0;
}