#include <iostream>
using namespace std;

int main() {
	int a, i = 1;
	cout << "Please, enter the multiplicand: ";
	cin >> a;
	while (i <= 9)
	{
		cout << "\n" << a << " x " << i << " = " << a * i;
		i++;
	}
	return 0;
}