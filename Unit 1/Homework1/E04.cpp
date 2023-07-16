#include <iostream>
using namespace std;

int main() {
    char car;
    bool consonant;
    
    for (int i = 0; i < 100; i++) {
        consonant = true;
        
        car = static_cast<char>(rand() % 26 + 'A');
       
        switch (car) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                consonant = false;
                break;
        }
        cout << "Generated: " << car << " -> ";
       
        if (consonant) {
            cout << "consonant" << endl;
        } 
        else {
            cout << "vowel" << endl;
        }
    }
    
    return 0;
}