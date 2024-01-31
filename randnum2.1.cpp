#include<iostream>

using namespace std;

int main()
{
	srand(time(0));

	int arr[] = { 2, 4, 6, 8, 10 };

	int arrSize = sizeof(arr) / sizeof(arr[0]);
	int randIndex = rand() % arrSize;
	int randNum = arr[randIndex];

	cout << randNum;

	return 0;
}