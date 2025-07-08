// Check if two numbers have the same last digit
// Input: Two integers
// Approach:
// if (a % 10 == b % 10)

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	if (a % 10 == b % 10) {
		cout << "Same last digit" << endl;
	} else {
		cout << "Different last digits" << endl;
	}
	return 0;
}
