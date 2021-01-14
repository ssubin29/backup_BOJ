#include <iostream>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int count = input.size();

	for (int i = 1; i < input.size(); i++)
	{
		if (input[i] == '=')
		{
			if (input[i - 1] == 'c' || input[i - 1] == 'z' || input[i - 1] == 's')
			{
				count--;
			}
			if ((i > 1) && (input[i - 1] == 'z') && (input[i - 2] == 'd'))
			{
				count--;
			}
		}
		else if (input[i] == '-')
		{
			if (input[i - 1] == 'c' || input[i - 1] == 'd')
			{
				count--;
			}
		}
		else if (input[i] == 'j')
		{
			if (input[i - 1] == 'n' || input[i - 1] == 'l')
			{
				count--;
			}
		}
	}
	printf("%d", count);
	return 0;
}