#include<iostream>

using namespace std;

int main()
{
	
	srand(time(0));

	
	char c = 'A' + rand() % 26;
	cout << (c) << " ";
	
	return 0;
}
