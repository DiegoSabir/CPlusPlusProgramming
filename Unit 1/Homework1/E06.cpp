#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int number) {
    int digit1 = number / 100;
    int digit2 = (number - 100 * digit1) / 10;
    int digit3 = number - 100 * digit1 - 10 * digit2;

    int result = pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3);
    
    if (result == number) {
        return true;
    }
    return false;
}

int main() {
    int number;

    cout << "Enter the number: ";
    cin >> number;

    if (armstrong(number)) {
        cout << "The number " << number << " is an Armstrong number" << endl;
    } 
    else {
        cout << "The number " << number << " is not an Armstrong number" << endl;
    }

    return 0;
}
