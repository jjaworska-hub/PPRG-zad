#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "Podaj liczbe: ";
	cin >> number;
	if (number == (number >> 1) << 1) {
		cout << "Podales liczbe parzysta: " << number << endl;
	}
	else {
		cout << "Podales liczbe nieparzysta: " << number << endl;
	}
	return 0;
}