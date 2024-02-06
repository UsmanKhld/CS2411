#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter number between 1-10: ";
	cin >> num;

	switch (num) {
	case (1):
		cout << "1 in roman numerals is I";
		break;
	case (2):
		cout << "2 in roman numerals is II";
		break;
	case (3):
		cout << "3 in roman numerals is III";
		break;
	case (4):
		cout << "4 in roman numerals is IV";
		break;
	case (5):
		cout << "5 in roman numerals is V";
		break;
	case (6):
		cout << "6 in roman numerals is VI";
		break;
	case (7):
		cout << "7 in roman numerals is VII";
		break;
	case (8):
		cout << "8 in roman numerals is VIII";
		break;
	case (9):
		cout << "9 in roman numerals is IX";
		break;
	case (10):
		cout << "10 in roman numerals is X";
		break;
	default:
		cout << "Number is out of range";
		break;
	}
	return 0;
}