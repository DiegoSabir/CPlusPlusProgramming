/**
 * Make a program that gives 10 integer numbers that are entered by keyboard calculate:
 * - How many are even.
 * - How much is the even's addition,
 * - The odd's average.
 * - The total's addition.
 */

#include <iostream>
using namespace std;

void calculateNumbers() {
    int even = 0;
    int evenAddition = 0;
    int odd = 0;
    int oddAddition = 0;
    float oddAverage = 0;
    int totalAddition = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Introduce a number: ";
        int number;
        cin >> number;

        totalAddition += number;

        if (number % 2 == 0) {
            even++;
            evenAddition += number;
        }
        else {
            odd++;
            oddAddition += number;
        }
    }
    oddAverage = static_cast<float>(oddAddition) / odd;

    cout << even << endl;
    cout << evenAddition << endl;
    cout << oddAverage << endl;
    cout << totalAddition << endl;
}

int main() {
    calculateNumbers();
    return 0;
}