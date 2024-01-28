#include <iostream>

using namespace std;

int main()
{
	char lowerCase;
	char upperCase;

	cout << "input a lowercase letter: ";
	cin >> lowerCase;
	upperCase = int(lowerCase) - 32;
	cout << "The uppercase version of this letter is: " << upperCase;

	return 0;
}