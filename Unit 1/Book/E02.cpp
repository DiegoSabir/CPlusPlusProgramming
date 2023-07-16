/**
 * Write a program that calculates the area of a triangle receiving as input the value of base and height.
 */

#include <iostream>
using namespace std;

int main(){

    double base, height, area;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the height: ";
    cin >> height;

    area = base * height;
    cout << "Triangle area: " << area << endl;

    return 0;
}