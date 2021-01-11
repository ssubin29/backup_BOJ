#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int input;
	cin >> input;
	int N = (-1 + (sqrt(1 + 8 * input))) / (2); //근의 공식 사용
	int sumN = ((N * (N + 1)) / 2);
	int ascN, descN;
	if (input == sumN) { ascN = 1; descN = N; }
	else { ascN = input - sumN; descN = N + 2 - ascN; }

	if (N % 2 != 0) { printf("%d/%d", ascN, descN); }
	else { printf("%d/%d", descN, ascN); }
	return 0;
}