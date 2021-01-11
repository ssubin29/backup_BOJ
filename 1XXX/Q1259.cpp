#include <iostream>
using namespace std;

int main() //
{
	while (true)
	{
		string input;
		bool ffalse = false;
		cin >> input;
		if (input == "0")
		{
			break;
		}

		int IpSize = input.size();
		for (int i = 0; i < IpSize / 2; i++) // 0 1
		{
			if (input[i] != input[IpSize - i - 1]) //0-3/1-2
			{
				ffalse = true;
				break;
			}
		}
		printf("%s\n", ffalse ? "no" : "yes");
	}
	return 0;
}