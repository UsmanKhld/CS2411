#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));
	int upper = 12;
	int lower = 2;

	int p1 = (rand() % (upper - lower + 1) + lower);
	int p2 = (rand() % (upper - lower + 1) + lower);

	cout << "Player 1 rolled: " << p1 << endl;
	cout << "Player 2 rolled: " << p2 << endl;

	if (p1 > p2)
	{
		cout << "Player 1 won";
	}
	else if (p2 > p1)
	{
		cout << "Player 2 won";
	}
	else
	{
		cout << "Both players rolled the same number";
	}
	return 0;
}