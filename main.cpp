#include <iostream>
using namespace std;

int main() {
	int a, sum = 0;
	cout << "Please, enter the value of a: ";
	cin >> a;
	while (a <= 500)
	{
		sum += a;
		a++;
	}
	cout << "The sum is " << sum;
	return 0;
}