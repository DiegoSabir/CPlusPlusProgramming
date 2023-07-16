/**
 * Make a program that shows the prime numbers from 1 to 100.
 */

#include  <iostream>
using namespace std;

void showPrimeNumbers(){
    for(int i = 1; i <= 100; i++){
        bool prime = true;
        int counter = 0;

        for(int j = 1; j <= 100; j++){
            if (i % j == 0){
                counter++;
            }
            if (counter > 2){
                prime = false;
            }
        }
        if (prime){
            cout << i << endl;
        }
    }
}

int main(){
    showPrimeNumbers();

    return 0;
}