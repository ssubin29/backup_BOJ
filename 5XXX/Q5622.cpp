#include <iostream>
using namespace std;
//A�� 65 Z�� 90 a�� 97 z�� 122

int main()
{
	string input;
	cin >> input;
	int time = 0;
	for (int i = 0; i < input.size(); i++)
	{
		time += 2;
		time += (((int)input[i] - 65) / 3) + 1;
		if (input[i] == 'Z' || input[i] == 'V' || input[i] == 'S' || input[i] == 'Y') time--;
	}
	cout << time << endl;

	return 0;
}