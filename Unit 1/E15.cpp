/**
 * Make a program allows you to guess a number.
 * The program generates a random number from 1 to 10.
 * It then asks for numbers and answers whether the number to guess is higher or less than the number introduced.
 * There are 5 attempts to hit the number.
 * When you get the number right, the program tells you how many attempts you’ve made.
 * When the attempts are over, the number is displayed.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessNumber(){
    int number;
    int attempts = 5;

    srand(time(0));
    int secretNumber = rand() % 11;

    while (attempts > 0) {
        cout << "Introduce a number: ";
        cin >> number;
        attempts--;

        if (number > secretNumber) {
            cout << "The number introduced is higher than the secret number" << endl;
        } 
        else if (number < secretNumber) {
            cout << "The number introduced is less than the secret number" << endl;
        } 
        else {
            cout << "¡CORRECT NUMBER!" << endl;
            cout << "YOU HAVE SUCCESSFUL IN " << (5 - attempts) << " ATTEMPTS" << endl;
            return; 
        }

        cout << "You have " << attempts << " attempts left" << endl;
    }

    cout << "NUMBER OF ATTEMPTS FINISHED" << endl;
    cout << "YOU LOST" << endl;
    cout << "GOOD LUCK NEXT TIME" << endl;
}

int main(){
    guessNumber();

    return 0;
}