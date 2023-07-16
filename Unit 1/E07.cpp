/**
 * Read from the keyboard a series of numbers until you get one less than ten.
 */

#include <iostream>
using namespace std;

void askNumbers(){
    
    int number;

    do{
        cout << "Enter a number: ";
        cin >> number;
    }
    while (number > 0);

    cout << "END";
}

int main(){
    askNumbers();
    
    return 0; 
}