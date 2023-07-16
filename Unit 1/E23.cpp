/**
 * Make a program in which the seconds are introduced by keyboard and return how many it is in hours minutes and seconds.
 */

#include <iostream>
using namespace std;

void secondsHours(int seconds) {
    int hours, minutes;

    cout << seconds << endl;
    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;
    cout << "Hours: " << hours << " Minutes: " << minutes << " Seconds: " << seconds << endl;
}

int main() {
    cout << "Introduce the seconds to convert: ";
    int seconds;
    cin >> seconds;

    secondsHours(seconds);

    return 0;
}