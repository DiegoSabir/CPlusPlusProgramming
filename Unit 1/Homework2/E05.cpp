#include <iostream>
using namespace std;

bool isPrime(int num) {
    int i = 2;

    while (i != num) {
        if (num % i == 0)
            return false;
        i++;
    }

    return true;
}

string reverseString(string data) {
    string s = "";

    for (int i = data.length() - 1; i >= 0; i--) {
        s += data.substr(i, 1);
    }
    
    return s;
}

bool isOmirp(int num) {
    if (!isPrime(num)) return false;

    string str = to_string(num);

    str = reverseString(str);

    int reversedNum = stoi(str);
    
    if (!isPrime(reversedNum)) return false;
    return true;
}

int main() {
    int num;
    cout << "Enter a number to check: ";
    cin >> num;
    cout << boolalpha << isOmirp(num) << endl;

    // Example usage:
    // cout << boolalpha << isOmirp(7952) << endl; // -> false
    // cout << boolalpha << isOmirp(7951) << endl; // -> true

    return 0;
}