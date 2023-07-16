#include <iostream>
#include <string>
using namespace std;

int getNumber() {
    int day, month, year;
    day = month = year = 0;
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter Year: ";
    cin >> year;
    return (day + month + year);
}

int reduce(int data) { // COULD ALSO BE IMPLEMENTED WITH SPLIT
    int sum = 0;
    string str = to_string(data);
    for (int i = 0; i < str.length(); i++) {
        sum += stoi(str.substr(i, 1));
    }
    return sum;
}

int main() {
    int data = getNumber();
    while (data > 9) {
        data = reduce(data);
    }
    cout << "Your lucky number is: " << data << endl;
    
    return 0;
}