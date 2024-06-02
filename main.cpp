#include <iostream>
using namespace std;

int main() {
	int x, y, product = 1, i = 1;
	cout << "Please, enter the base of exponent: ";
	cin >> x;
	cout << "Please, enter the exponent: ";
	cin >> y;
	while (i <= y)
	{
		product *= x;
		i++;
	}
	cout << "The product is " << product;
	return 0;
}