/**
 * Write a program that, given 2 input values, always prints the division of the higher by the lower.
 */

#include <iostream>
using namespace std;

int main(){

    int number1, number2;
    double result;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    if(number1>=number2){
        result = number1 / number2;
    }
    else{
        result = number2 / number1;
    }

    cout << "Division result: " << result << endl;

    return 0;
}