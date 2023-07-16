/**
 * Make a program that prints and counts the three's multiples to the number introduced by keyboard.
 */

#include <iostream>
using namespace std;

void multiples(int n) {
    cout << "Three's multiples up to " << n << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    cout << "Introduce up to where you want to count: ";
    int number;
    cin >> number;

    multiples(number);

    return 0;
}