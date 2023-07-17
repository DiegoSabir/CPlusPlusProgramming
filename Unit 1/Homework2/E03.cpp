#include <iostream>
using namespace std;

void printDiamond(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            cout << " ";
        }
        
        cout << "*";
        
        for (int j = 0; j < i * 2 - 1; j++) {
            cout << " ";
        }
        
        if (i > 0) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    for (int i = height - 2; i >= 0; i--) {
        for (int j = 0; j < height - i - 1; j++) {
            cout << " ";
        }
        
        cout << "*";
        
        for (int j = 0; j < i * 2 - 1; j++) {
            cout << " ";
        }
        
        if (i > 0) {
            cout << "*";
        }
        
        cout << endl;
    }
}

int main() {
    int height;

    cout << "Enter the height of the diamond: ";
    cin >> height;

    printDiamond(height);

    return 0;
}