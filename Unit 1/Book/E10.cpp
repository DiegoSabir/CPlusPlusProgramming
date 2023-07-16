/**
 * Make a program that shows even numbers up to ten.
 */

#include <iostream>
using namespace std;

void evenNumbers() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            cout << i << "\n";
        }
    }
}

int main() {
    cout << "Even Numbers: " << "\n";

    evenNumbers();

    cout << endl;

    return 0;
}