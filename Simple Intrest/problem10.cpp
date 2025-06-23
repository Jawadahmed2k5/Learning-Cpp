#include <iostream>
using namespace std;

int main() {
    // Problem No 10: Simple Interest
    float principal, rate, time;
    cout << "Enter Principal, Rate and Time: ";
    cin >> principal >> rate >> time;
    float interest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << interest << endl;
    return 0;
}
