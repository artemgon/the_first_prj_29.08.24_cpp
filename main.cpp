#include <iostream>
using namespace std;

int main() {
	int i = 0;
	float sum = 0;
	while (i <= 1000)
	{
		sum += i;
		i++;
	}
	cout << "The arithmetic mean is " << sum/1000;
	return 0;
}