#include <iostream>
using namespace std;

int returnSameCount(string a, string b, int aSize, int startI)
{
	int count = 0;

	for (int j = 0; j < aSize; j++)
	{
		if (a[j] != b[startI + j]) { count++; }
	}

	return count;
}

int main()
{
	string A, B; cin >> A >> B; //A<=B
	int i, j, min = 50;
	int As = A.length();
	int Bs = B.length();
	int* arrN = new int[Bs - As + 1];

	for (i = 0; i <= Bs - As; i++)
	{
		arrN[i] = returnSameCount(A, B, As, i);
		if (min > arrN[i]) { min = arrN[i]; }
	}
	cout << min << endl;
	return 0;
}