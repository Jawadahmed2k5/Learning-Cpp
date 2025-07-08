//  Check if a number is between two other numbers and even
// Input: Three integers
// Approach:
// if ((num > a && num < b) || (num > b && num < a)) && num % 2 == 0

#include <iostream>
using namespace std;

int main() {
	int a, b, num;
	cout << "Enter three integers (a, b, num): ";
	cin >> a >> b >> num;

	if (((num > a && num < b) || (num > b && num < a)) && num % 2 == 0) {
		cout << num << " is between " << a << " and " << b << " and is even." << endl;
	} else {
		cout << num << " does not satisfy the condition." << endl;
	}

	return 0;
}
