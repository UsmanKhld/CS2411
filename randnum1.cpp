#include <iostream>

using namespace std;

int main()
{
	int ub = 6;
	int lb = 1;
	srand(time(0));

	cout << (rand() % (ub - lb + 1) + lb) << " ";
	
	return 0;
}