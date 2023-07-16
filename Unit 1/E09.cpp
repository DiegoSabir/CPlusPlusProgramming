/**
 * Make a program that calculates the factorial's number.
 */

#include <iostream>
using namespace std;

int calculateFactorial(int number){
    int factorial = 1;
    int counter = 1;
    
    while(counter <= number) {
        factorial *= counter;
        counter++;
    } 
        
    return factorial;
}

int main(){
    int number;

    cout << "Introduce a number: ";
    cin >> number;

    cout << "The factorial's number is " << calculateFactorial(number) << endl;

    return 0;
}