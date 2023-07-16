/**
 * Make a program that prints the higher and lower number of a series of numbers entered by keyboard(
 * If you want to exit, introduce a negative number.
 */

#include <iostream>
using namespace std;

void higherLower() {
    int n;
    int higher = 0;
    int lower = 1000;

    do {
        cout << "Introduce a number: ";
        cin >> n;
        if (n >= 0) {
            if (n > higher) {
                higher = n;
            }
            if (n < lower) {
                lower = n;
            }
        }
    } 
    while (n > 0);
    
    cout << "The higher number is " << higher << " and the lower is " << lower << endl;
}

int main() {
    higherLower();
    return 0;
}