/**
 * Make a program that introduce two numbers by keyboard.
 * Print the numbers between them, count how many there are and how many are even.
 * Calculate the odd's product.
 */

#include <iostream>
using namespace std;

void evenOddRange() {
    cout << "Introduce the initial number: ";
    int number1;
    cin >> number1;

    cout << "Introduce the final number: ";
    int number2;
    cin >> number2;

    int count = 0;
    int even = 0;
    int odd = 1;

    for (int i = number1; i <= number2; i++) {
        cout << i << endl;
        count++;
        if (i % 2 == 0) {
            even++;
        }
        else {
            odd *= i;
        }
    }
    cout << "There are " << count << " numbers between them" << endl;
    cout << "There are " << even << " even numbers" << endl;
    cout << "The odd's product is " << odd << endl;
}

int main() {
    evenOddRange();
    return 0;
}