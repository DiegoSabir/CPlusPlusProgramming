/**
 * Write a program that reads three numbers which means a date(day, month, year).
 * Check that the date is valid, if it is not valid to print an error message.
 * When is valid, print the month with his respective name.
 */

#include <iostream>
using namespace std;

int main() {

    int day, month, year;
    string monthName;

    cout << "Enter the day: ";
    cin >> day;
    
    cout << "Enter the month: ";
    cin >> month;
        
    cout << "Enter the year: ";
    cin >> year;

    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 0){
        cout << "Invalid date";
    }
    else if ((month == 4 || month == 6 || month == 9 || month==11) && day > 30){
        cout << "Invalid Date";
    }
    else if (month == 2 && day > 28){
        cout << "Februay doesnt have that day";
    }
    else{
        switch(month){
            case 1:
                monthName = "January";
                break;

            case 2:
                monthName = "February";
                break;

            case 3:
                monthName = "March";
                break;

            case 4:
                monthName = "April";
                break;

            case 5:
                monthName = "May";
                break;

            case 6:
                monthName = "June";
                break;

            case 7:
                monthName = "July";
                break;

            case 8:
                monthName = "August";
                break;

            case 9:
                monthName = "September";
                break;

            case 10:
                monthName = "October";
                break;

            case 11:
                monthName = "November";
                break;

            case 12:
                monthName = "December";
                break;
        }
    
        cout << monthName << " " << day << ", " << year;
    }

    return 0;
}
