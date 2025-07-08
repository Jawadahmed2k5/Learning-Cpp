// Determine if a year is a century year
//Input: Year
//Approach:
//if (year % 100 == 0)
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is a century year
    if (year % 100 == 0) {
        cout << "The year " << year << " is a century year." << endl;
    } else {
        cout << "The year " << year << " is not a century year." << endl;
    }

    return 0;
}