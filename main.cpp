#include <iostream>
using namespace std;

int main() {
	int a;
	double product = 1;
	cout << "Please, enter the value of a(1 <= a <= 20): ";
	cin >> a;
	while (a <= 20)
	{
		product *= a;
		a++;
	}
	cout << "The product is " << product;
	return 0;
}