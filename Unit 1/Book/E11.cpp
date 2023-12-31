/**
 * Make a program that asking for a password.
 * The user have three attempts maximum.
 * The password is 111 or 222 or 333.
 */
#include <iostream>
using namespace std;

bool checkPassword(){
    bool result = false;
    int attempts = 3;
    int password;

    do {
        cout << "Enter the password: ";
        cin >> password;
        attempts--;

        if (password == 111 || password == 222 || password == 333) {
            result = true;
        }
    } 
    while (attempts > 0 && password != 111 && password != 222 && password != 333);

    return result;
}

int main(){

    if (!checkPassword()){
        cout << "ACCOUNT BLOCKED" << endl;
    }
    else{
        cout << "CORRECT PASSWORD" << endl;
    }

    return 0;
}