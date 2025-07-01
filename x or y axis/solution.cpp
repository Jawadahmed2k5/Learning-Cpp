#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Please enter x-coordinate: ";
    cin >> x;

    cout << "Please enter y-coordinate: ";
    cin >> y;

   
    if (x == 0 && y == 0) {
        cout << "Point lies at the Origin." << endl;
    } 
    else if (x == 0 && y != 0) {
        cout << "Point lies on the Y-Axis." << endl;
    } 
    else if (y == 0 && x != 0) {
        cout << "Point lies on the X-Axis." << endl;
    } 
    else {
        cout << "The point lies neither on the X-Axis nor Y-Axis." << endl;
    }

    return 0;
}
