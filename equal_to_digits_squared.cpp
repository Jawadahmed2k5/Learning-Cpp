//  Check if a number is equal to the sum of its digits squared
// Input: Integer (2-digit)
// Approach:
// Extract digits a, b;
// Check:
// if (num == (a*a + b*b))

#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a 2-digit integer: ";
	cin >> num;

	if (num < 10 || num > 99) {
		cout << "Please enter a valid 2-digit integer." << endl;
		return 1;
	}

	int a = num / 10; // tens digit
	int b = num % 10; // units digit

	if (num == (a * a + b * b)) {
		cout << num << " is equal to the sum of the squares of its digits." << endl;
	} else {
		cout << num << " is NOT equal to the sum of the squares of its digits." << endl;
	}

	return 0;
}
