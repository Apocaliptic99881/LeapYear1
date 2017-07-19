#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int x;


int main()
{

	cout << "Write a number: ";
	cin >> x;
	vector<int> array(x);

	for (int i = 0; i < x; i++)
	{
		cout << "Enter number " << i << ": ";
		cin >> array[i];
	}

	for (int g = 0; g < (x-1); g++)
	{
		for (int z = 0; z < (x - 1); z++)
		{
			if (array[z] > array[z + 1])
			{
				swap(array[z], array[z + 1]);
			}
		}
	}


	for (int u = 0; u < x; u++)
	{
		cout << u << '\t' << array[u] << endl;

	}
	system("pause");
}