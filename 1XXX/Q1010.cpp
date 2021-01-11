#include <iostream>
using namespace std;

int combin(int a, int b) //aCb 5C3
{
	long long aBase = 1; long long bBase = 1; int i = 0;

	for (i = 0; i < b; i++) { aBase *= a--; }
	for (i = 1; i <= b; i++) { bBase *= i; }

	return aBase / bBase;
}

int main()
{
	int caseN, i; cin >> caseN;
	int N, M, result;
	for (i = 0; i < caseN; i++)
	{
		cin >> N >> M;
		N = (N < M - N) ? N : M - N;
		result = combin(M, N); //N은 서 M은 동 그러므로 MCN
		cout << result << endl;
	}
	return 0;
}