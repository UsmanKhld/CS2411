#include<iostream>

using namespace std;

int main()
{
	
	srand(time(0));

	for (int i = 0; i < 26; i++)
	{
		char c = 'A' + rand() % 26;
		cout << (c) << " ";
	}
	
	return 0;
}