#include <iostream>
using namespace std;

string decimalToRoman(int number) {
    int amount = number;

    string romanNumeral = "";

    while (amount > 0) {
        while (amount >= 1000) {
            amount -= 1000;
            romanNumeral += "M";
        }

        while (amount >= 900) {
            amount -= 900;
            romanNumeral += "CM";
        }

        while (amount >= 500) {
            amount -= 500;
            romanNumeral += "D";
        }

        while (amount >= 400) {
            amount -= 400;
            romanNumeral += "CD";
        }

        while (amount >= 100) {
            amount -= 100;
            romanNumeral += "C";
        }

        while (amount >= 90) {
            amount -= 90;
            romanNumeral += "XC";
        }

        while (amount >= 50) {
            amount -= 50;
            romanNumeral += "L";
        }

        while (amount >= 40) {
            amount -= 40;
            romanNumeral += "XL";
        }

        while (amount >= 10) {
            amount -= 10;
            romanNumeral += "X";
        }

        while (amount >= 9) {
            amount -= 9;
            romanNumeral += "IX";
        }

        while (amount >= 5) {
            amount -= 5;
            romanNumeral += "V";
        }

        while (amount >= 4) {
            amount -= 4;
            romanNumeral += "IV";
        }

        while (amount >= 1) {
            amount -= 1;
            romanNumeral += "I";
        }
    }

    return romanNumeral;
}

int main() {
    int number;

    cout << "Enter a number to be transformed into Roman Numerals: " << endl;
    cin >> number;

    cout << decimalToRoman(number) << endl;

    return 0;
}