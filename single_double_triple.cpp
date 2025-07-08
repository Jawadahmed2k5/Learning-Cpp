// Classify a number as single, double, or triple digit
// Input: Integer
// Approach:
// if (num >= 0 && num <= 9) // Single  
// else if (num >= 10 && num <= 99) // Double  
// else if (num >= 100 && num <= 999) // Triple

#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter an integer: ";
	cin >> num;

	if (num >= 0 && num <= 9)
		cout << "Single digit" << endl;
	else if (num >= 10 && num <= 99)
		cout << "Double digit" << endl;
	else if (num >= 100 && num <= 999)
		cout << "Triple digit" << endl;
	else
		cout << "Number is not in the range of single, double, or triple digit (0-999)" << endl;

	return 0;
}
