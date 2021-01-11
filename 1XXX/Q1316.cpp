#include <iostream>
using namespace std;

int main()
{
	int N, i, j, k;
	cin >> N;
	string input;
	int count = 0;

	for (k = 0; k < N; k++)
	{
		bool NotGroup = false;
		int arrCount = 0;
		cin >> input;
		for (j = 0; j < input.size(); j++) // 알파벳 하나하나 확인
		{
			for (i = 0; i < j; i++)
			{
				if ((input[j] == input[i]) && (input[j] != input[i + 1]))
				{
					NotGroup = true;
				}
			}
		}
		if (j == input.size() && !NotGroup) { count++; }
	}
	cout << count << endl;
	return 0;
}