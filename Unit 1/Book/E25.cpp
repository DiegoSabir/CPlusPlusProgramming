/**
 * Make a program that calculates the plus of the digits of a number introduced by keyboard
 */

#include <iostream>
using namespace std;

int plusDigits(int number) {
    int plus = 0, rest;
    while (number != 0) {
        rest = number - (number / 10) * 10;
        plus = plus + rest;
        number = number / 10;
    }
    return plus;
}

int main() {
    cout << "Introduce a number: ";
    int number;
    cin >> number;
    cout << "The addition of the digits of " << number << " is: " << plusDigits(number) << endl;
    return 0;
}