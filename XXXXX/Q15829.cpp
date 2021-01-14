#include <iostream>
using namespace std;

const int R = 31;
const int MOD = 1234567891;

int main()
{
	int count; string c;
	unsigned long long sum = 0;
	long long base = 1;
	cin >> count >> c;

	for (int i = 0; i < count; i++)
	{
		sum += (base * (c[i] - 'a' + 1)) % MOD;
		base *= R;
		base %= MOD;
	}
	sum %= MOD;
	cout << sum << endl;
	return 0;
}