/**
 * Make a program that shows the multiplication's tables up to ten.
 */

#include <iostream>
using namespace std;

void multiplicationTables(){
    for (int i = 1; i <= 10; i++){
        cout << "----------" << endl;
        cout << "Table's " << i << endl;
        for (int j = 1; j <= 10; j++){
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }
}

int main(){
    cout << "MULTIPLICATION TABLES" << endl;

    multiplicationTables();

    return 0;
}