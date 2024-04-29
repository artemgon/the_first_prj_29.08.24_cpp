#include <iostream>
using namespace std;

int main() {
	int number_1;
	cout << "Please, enter the first number of the range:";
	cin >> number_1;
	int number_2;
	cout << "Please, enter the last number of the range:";
	cin >> number_2;
	while (number_1 < number_2) {
		cout << "\n" << number_1;
		number_1++;
		if (number_1 % 2 == 0) {
			cout << "\nNumber " << number_1 << " is even";
		}
		if (number_1 % 2 != 0) {
			cout << "\nNumber " << number_1 << " is odd";
		}
		if (number_1 % 7 == 0) {
			cout << "\nNumber 7 is factor of number " << number_1;
		}
	}
	return 0;
}