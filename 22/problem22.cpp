#include <iostream>
using namespace std;

int main() {
    // Problem No 22
    int percentage;
    cout << "Enter your percentage: ";
    cin >> percentage;

    if (percentage > 100 || percentage < 0)
        cout << "Invalid percentage!";
    else if (percentage >= 90)
        cout << "Grade: A+";
    else if (percentage >= 80)
        cout << "Grade: A";
    else if (percentage >= 70)
        cout << "Grade: B";
    else if (percentage >= 60)
        cout << "Grade: C";
    else if (percentage >= 50)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}
