// Check if a number is exactly 10 more than another number
// Input: Two integers
// Approach:
// if (a == b + 10 || b == a + 10)

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;

	if (a == b + 10 || b == a + 10) {
		cout << "Yes, one number is exactly 10 more than the other." << endl;
	} else {
		cout << "No, neither number is exactly 10 more than the other." << endl;
	}

	return 0;
}
