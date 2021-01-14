#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long input;
	cin >> input;
	int N = ((-3 + (sqrt(12 * input - 3))) / (6));
	if (input == 6 * (((N * (N + 1)) / 2)) + 1) { printf("%d\n", N + 1); }
	else { printf("%d\n", N + 2); }

	return 0;
}