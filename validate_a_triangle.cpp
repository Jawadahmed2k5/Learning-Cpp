// Validate a triangle using side lengths
// Input: a, b, c
// Approach:
// Check triangle inequality:
// if (a + b > c && a + c > b && b + c > a)

#include <iostream>
using namespace std;

int main() {
	double a, b, c;
	cout << "Enter three side lengths: ";
	cin >> a >> b >> c;

	if (a + b > c && a + c > b && b + c > a) {
		cout << "The sides form a valid triangle." <<endl;
	} else {
		cout << "The sides do not form a valid triangle." <<endl;
	}

	return 0;
}
