// Check if the difference of two numbers is a two-digit number
// Input: Two integers
// Approach:
// diff = abs(a - b);  
// if (diff >= 10 && diff <= 99)

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	int diff = abs(a - b);
	if (diff >= 10 && diff <= 99) {
		cout << "The difference is a two-digit number." << endl;
	} else {
		cout << "The difference is not a two-digit number." << endl;
	}
	return 0;
}
