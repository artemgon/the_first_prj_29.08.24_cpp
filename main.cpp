#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Please, enter the number:";
	cin >> number;
	int i = 0;
	while (number > i) {
		cout << "\n" << i;
		i++;
	}
	return 0;
}