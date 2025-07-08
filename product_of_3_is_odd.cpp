// Determine if the product of three digits is odd
// Input: 3-digit number
// Approach:
// Extract digits
// Check: if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0)

#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a 3-digit number: ";
	cin >> num;

	int a = num / 100;
	int b = (num / 10) % 10;
	int c = num % 10;

	if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0) {
		cout << "The product of the digits is odd." << endl;
	} else {
		cout << "The product of the digits is not odd." << endl;
	}

	return 0;
}
