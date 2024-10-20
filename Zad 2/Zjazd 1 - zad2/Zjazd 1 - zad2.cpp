#include <iostream>
using namespace std;

int main() {
	int number;

	cout << "Podaj liczba calkowita: ";
	cin >> number;
	if (number == 0) {
		cout << "Wpisales liczbe rowna " << number << endl;
	}
	else if (number > 0) {
		cout << "Wpisales dodatnia liczbe calkowita: " << number << endl;
	}
	else {
		cout << "Wpisales ujemna liczbe calkowita: " << number << endl;
	}
	cout << "Dzieki!";
	return 0;
}