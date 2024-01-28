#include <iostream>

using namespace std;

int main()
{
	int hours;
	int minutesIn;
	int minutesOut;

	cout << "Input number of minutes: ";
	cin >> minutesIn;
	hours = minutesIn / 60;
	minutesOut = minutesIn % 60;
	cout << hours << " hours and " << minutesOut << " minutes";
	return 0;
}