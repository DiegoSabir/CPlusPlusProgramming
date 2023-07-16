/**
 * Write a program that reads three entered numbers and indicates which is the higher of them.
 */

#include <iostream>
using namespace std;

int main(){

    int number1, number2, number3;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    cout << "Enter the third number: ";
    cin >> number3;

    if (number1 > number2 && number1 > number3){
        cout << "Higher number: " << number1 << endl;
    }
    else if (number2 > number1 && number2 > number3){
        cout << "Higher number: " << number2 << endl;
    }
    else{
        cout << "Higher number: " << number3 << endl;
    }

    return 0;
}