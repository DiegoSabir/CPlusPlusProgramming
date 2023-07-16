#include <iostream>
using namespace std;

int main() {
    // Upper part
    for (int i = 1; i < 5; i++) {
        int stars = 2 * i - 1;
        int spaces = 4 - i; // There are 4 spaces to center the diamond
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < stars; j++) {
            cout << " *";
        }
        cout << endl;
    }
    // Lower part
    for (int i = 3; i > 0; i--) {
        int stars = 2 * i - 1;
        int spaces = 4 - i;
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < stars; j++) {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}