#include <iostream>
#include <iomanip>   // for setw
using namespace std;

// Function to check if a year is leap year
bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Function to return number of days in a given month of a year
int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: return 31;
        case 2: return isLeapYear(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 30;
    }
}

// Function to calculate day of week for 1st day of month (0=Sunday, 1=Monday...)
int getStartDay(int month, int year) {
    int d = 1, m = month, y = year;
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int k = y % 100;
    int j = y / 100;
    int day = (d + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;
    return ((day + 6) % 7); // Adjust so Sunday=0
}

int main() {
    int month, year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    int days = getDaysInMonth(month, year);
    int startDay = getStartDay(month, year);

    cout << "\n   Calendar for " << month << "/" << year << "\n";
    cout << " Sun Mon Tue Wed Thu Fri Sat\n";

    // Print leading spaces
    for (int i = 0; i < startDay; i++) {
        cout << setw(4) << " ";
    }

    // Print all days of the month
    for (int d = 1; d <= days; d++) {
        cout << setw(4) << d;
        if ((d + startDay) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;

    return 0;
}
