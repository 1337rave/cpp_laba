#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter the year: ";
    cin >> year;

    int daysInYear;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInYear = 366;
    }
    else {
        daysInYear = 365;
    }

    cout << "in " << year << " year = " << daysInYear << " days " << endl;

    return 0;
}
