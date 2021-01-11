#include <iostream>
using namespace std;

int div_N(int N1, int N2, int divN, int& count)
{
	if ((N1 % divN == 0) || (N2 % divN == 0)) { count++; return div_N(N1 % divN, N2 % divN, divN, count); }
	else { return count; }
}

int GCD(int a, int b)
{
	if (b == 0) { return a; }
	else return GCD(b, a % b);
}

int main()
{
	int A, B, N;cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A >> B;
		int count = 0;
		int gcd = GCD(A, B);
		cout << gcd * (A / gcd) * (B / gcd) << endl;
	}
	return 0;
}