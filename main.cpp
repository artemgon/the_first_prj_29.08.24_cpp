#include <iostream>
using namespace std;

int main() {
	int number_1;
	cout << "Please, enter the first number of the range:";
	cin >> number_1;
	int number_2;
	cout << "Please, enter the last number of the range:";
	cin >> number_2;
	/* Way with arithmetic series
	int sum = (number_1 + number_2) / 2 * ((number_2 - number_1) + 1);
	cout << sum;*/
	int sum = 0;
	while (number_2 >= number_1) {
		sum += number_1;
		number_1++;
	}
	cout << "The sum of members of given range is: " << sum;
	return 0;
}