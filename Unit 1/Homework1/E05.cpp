#include <iostream>
using namespace std;

void calculateBills(int value) {
    int bills[] = {500, 200, 100, 50, 20, 10, 5};
    int rest[] = {0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < sizeof(bills) / sizeof(bills[0]); i++) {
        if (value >= bills[i]) {
            rest[i] = value / bills[i];
            value -= rest[i] * bills[i];
        }
    }

    for (int i = 0; i < sizeof(bills) / sizeof(bills[0]); i++) {
        if (rest[i] > 0) {
            cout << rest[i] << " bill of: " << bills[i] << " Euros" << endl;
        }
    }
    cout << "Remaining amount: " << value << " Euros" << endl;
}

int main() {
    cout << "Enter the amount: ";
    int amount;
    cin >> amount;

    calculateBills(amount);

    return 0;
}