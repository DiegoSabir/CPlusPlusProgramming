/**
 * Write a program that calculates the addition of the first N positive integers.
 * Make methods with different loop.
 */

#include <iostream>
using namespace std;

int calculateAdditionDoWhile(int n) {
    int addition = 0;
    int counter = 1;
    
    do {
        addition += counter;
        counter++;
    } 
    while (counter <= n);
    
    return addition;
}

int calculateAdditionWhile(int n) {
    int addition = 0;
    int counter = 1;
    
    while (counter <= n) {
        addition += counter;
        counter++;
    }
    
    return addition;
}

int calculateAdditionFor(int n) {
    int addition = 0;
    
    for (int counter = 1; counter <= n; counter++) {
        addition += counter;
    }
    
    return addition;
}

int main() {
    int number;

    cout << "Enter the number to calculate: ";
    cin >> number;

    cout << "The additions result is: " << calculateAdditionDoWhile(number) << endl;
    cout << "The additions result is: " << calculateAdditionWhile(number) << endl;
    cout << "The additions result is: " << calculateAdditionFor(number) << endl;

    return 0;
}