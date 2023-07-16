/**
 * Make a program that asks for numbers until a zero is introduced.
 * It must print the addition and average of all entered numbers introduced.
 */

#include <iostream>
using namespace std;

float additionNumbers(){
    int number;
    int counter = 0;
    int addition = 0;
    float result;

    do{
        cout << "Enter a number: ";
        cin >> number;

        addition += number;
        counter++;
    }
    while(number != 0);

    result = (float) addition / (counter - 1);

    return result;
}

int main(){
    float average = additionNumbers();

    cout << "Average: " << average << endl;

    return 0;
}
