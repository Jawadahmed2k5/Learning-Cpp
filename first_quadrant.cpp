//Problem:Check if a point lies in the first quadrant (x > 0, y > 0)
//Input: x, y
//Approach:
//if (x > 0 && y > 0)
#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter coordinates (x y): ";
    cin >> x >> y;

    // Check if the point lies in the first quadrant
    if (x > 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in the first quadrant." << endl;
    } else {
        cout << "The point (" << x << ", " << y << ") does not lie in the first quadrant." << endl;
    }

    return 0;
}