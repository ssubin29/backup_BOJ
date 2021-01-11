#include <iostream>
using namespace std;

int main()
{
	string days[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	int month, day, count;
	count = 0;
	cin >> month >> day;
	for (int m = 1; m < month; m++)
	{
		if (month == 1)
		{
			break;
		}
		if (m == 2)
		{
			count += 28;
		}
		else if (m == 4 || m == 6 ||
			m == 9 || m == 11)
		{
			count += 30;
		}
		else
		{
			count += 31;
		}
	}
	for (int m = 1; m < day; m++)
	{
		count++;
	}
	cout << days[count % 7] << endl;
	return 0;
}