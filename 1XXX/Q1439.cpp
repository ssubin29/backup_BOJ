#include <iostream>
using namespace std;

int main()
{
	string ans;
	cin >> ans;
	bool differ = false;
	int countA = 0;
	int countB = 0;
	countB++;
	for (int i = 1; i < ans.length(); i++)
	{
		if (ans[i] != ans[0] && differ == false)
		{
			differ = true;
			countA++;
		}

		if (ans[i] == ans[0] && differ == true)
		{
			differ = false;
			countB++;
		}
	}
	printf("%d", (countA > countB) ? countB : countA);
	return 0;
}