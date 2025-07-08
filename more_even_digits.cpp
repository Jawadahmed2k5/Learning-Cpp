//  Determine if a number has more even digits or odd digits (3-digit)
// Input: Integer
// Approach:
// Extract each digit
// Count even and odd
// Compare counts using if-else

#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a 3-digit integer: ";
	cin >> num;

	int even_count = 0, odd_count = 0;
	int n = abs(num); // handle negative numbers

	for (int i = 0; i < 3; ++i) {
		int digit = n % 10;
		if (digit % 2 == 0)
			++even_count;
		else
			++odd_count;
		n /= 10;
	}

	if (even_count > odd_count)
		cout << "More even digits." << endl;
	else if (odd_count > even_count)
		cout << "More odd digits." << endl;
	else
		cout << "Equal number of even and odd digits." << endl;

	return 0;
}
