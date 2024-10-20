#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int a, b, c;

    cout << "Podaj trzy liczby: ";
    cin >> a >> b >> c;
    
    int max1 = max(a, b); 
    int max2 = max(max1, c);

    cout << "Największa liczba to: " << max2 << endl;

    return 0;
}
