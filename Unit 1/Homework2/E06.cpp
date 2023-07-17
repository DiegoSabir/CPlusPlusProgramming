#include <iostream>
#include <vector>
using namespace std;

vector<int> generateCombinations(vector<int>& digits) {
    int count = 0;
    vector<int> combinations(24);

    for (int i = 0; i < digits.size(); i++) {
        for (int j = 0; j < digits.size(); j++) {
            if (digits[i] == digits[j]) continue; // Exclude combinations with equal digits

            for (int k = 0; k < digits.size(); k++) {
                if (digits[k] == digits[i] || digits[k] == digits[j]) continue; // Exclude combinations with equal digits

                for (int l = 0; l < digits.size(); l++) {
                    if (digits[l] == digits[i] || digits[l] == digits[j] || digits[l] == digits[k]) continue; // Exclude combinations with equal digits
                    combinations[count++] = digits[i] * 1000 + digits[j] * 100 + digits[k] * 10 + digits[l];
                }
            }
        }
    }
    return combinations;
}

void isVampire(vector<int>& digits) {
    bool isVampire = false;
    int pair1, pair2, pairMultiplication;

    vector<int> combinations = generateCombinations(digits);

    for (int i = 0; i < digits.size() && !isVampire; i++) {
        for (int j = 0; j < digits.size() && !isVampire; j++) {
            if (digits[i] == digits[j]) continue; // Exclude combinations with equal digits
            pair1 = digits[i] * 10 + digits[j];

            for (int k = 0; k < digits.size() && !isVampire; k++) {
                if (digits[k] == digits[i] || digits[k] == digits[j]) continue; // Exclude combinations with equal digits

                for (int l = 0; l < digits.size() && !isVampire; l++) {
                    if (digits[l] == digits[i] || digits[l] == digits[j] || digits[l] == digits[k]) continue; // Exclude combinations with equal digits
                    pair2 = digits[k] * 10 + digits[l];

                    pairMultiplication = pair1 * pair2;

                    for (int comb : combinations) {
                        if (pairMultiplication == comb) {
                            cout << "It is a vampire number: " << pair1 << " x " << pair2 << " = " << pairMultiplication << endl;
                            isVampire = true;
                            break;
                        }
                    }
                }
            }
        }
    }
    if (!isVampire)
        cout << "The number " << digits[3] << digits[2] << digits[1] << digits[0] << " is not a vampire number." << endl;
}

vector<int> getDigits(int number) {
    vector<int> result(4);
    int temp = number;
    int i = 0;
    while (temp > 0) {
        result[i] = temp % 10;
        temp = temp / 10;
        i++;
    }
    return result;
}

int main() {
    vector<int> digits = getDigits(1234);
    isVampire(digits);

    digits = getDigits(1206);
    isVampire(digits);

    digits = getDigits(2187);
    isVampire(digits);

    return 0;
}