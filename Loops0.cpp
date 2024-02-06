#include<iostream>

using namespace std;

int main()
{
	int num = 0;

	while (num < 1)
	{
		cout << "Enter a positive integer: ";
		cin >> num;
	}

	cout << "Output integers -> " << endl;

	for (int i = 0; i < num; i++)
	{
		cout << i << endl;
	}

	
	return 0;
}