#include <iostream>
using namespace std;

int main() {
    // Problem No 7: Fahrenheit to Celsius
    float fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    float celsius = (fahrenheit - 32) * 5/9;
    cout << "Temperature in Celsius: " << celsius << endl;
    return 0;
}
