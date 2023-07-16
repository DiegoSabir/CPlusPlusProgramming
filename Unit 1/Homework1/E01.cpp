#include <iostream>
using namespace std;

int number1 = 50;

int main() {
    int number2 = 30, number3 = 5, addition = 0;

    addition = number1 + number2;

    cout << "THE ADDITION IS: " << addition << endl;

    addition = addition + addition;

    cout << addition << endl;
    return 0;
}