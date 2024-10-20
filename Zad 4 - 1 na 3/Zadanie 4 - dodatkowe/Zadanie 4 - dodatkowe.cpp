#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	cout << "Wpisz trzy liczby po enterze: " << endl;
	cin >> n1 >> n2 >> n3;

	if (n1 >= n2) {
		if (n1 >= n3) {
			cout << "Najwieksza wpisana liczba jest: " << n1 << endl;
		}
		else {
			cout << "Najwieksza wpisana liczba jest: " << n3 << endl;
		}
	}
	else {
		if (n2 >= n3) {
			cout << "Najwieksza wpisana liczba jest: " << n2 << endl;
		}
		else {
			cout << "Najwieksza wpisana liczba jest: " << n3 << endl;
		}
	}
	return 0;
}