/**
 * Make a program that asks for ten numbers and calculated how many positives have been introduced.
 */

#include <iostream>
using namespace std;

int countPosivites(){
    int number;
    int counter = 0;

    for (int i = 1; i <= 10; i++){
        cout << "Enter a number: ";
        cin >> number;

        if (number > 0){
            counter++;
        }
    }

    return counter;
}

int main(){
    int result = countPosivites();

    cout << "Result: " << result << endl;

    return 0;
}