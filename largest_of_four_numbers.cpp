// Determine the largest of four numbers
// Input: Four integers
// Approach:
// Use nested if or chain logic like:
// if (a > b && a > c && a > d)

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cout << "Enter four integers: ";
	cin >> a >> b >> c >> d;

	int largest = a;
	if (b > largest) largest = b;
	if (c > largest) largest = c;
	if (d > largest) largest = d;

	cout << "The largest number is: " << largest << endl;
	return 0;
}
