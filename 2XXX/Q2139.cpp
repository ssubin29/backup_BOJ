#include <iostream>
using namespace std;

int main()
{
	int day, month, year, count;
	bool isLeap = false;
	while (true)
	{
		cin >> day >> month >> year;
		if (day == 0 || month == 0 || year == 0)
		{
			break;
		}
		count = 0;
		isLeap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
		for (int m = 1; m < month; m++)
		{
			if (month == 1)
			{
				break;
			}
			if (m == 2)
			{
				if (isLeap == true)
				{
					count += 29;
				}
				else
				{
					count += 28;
				}
			}
			else if (m == 4 || m == 6 || m == 9 || m == 11)
			{
				count += 30;
			}
			else
			{
				count += 31;
			}
		}
		for (int d = 0; d < day; d++)
		{
			count++;
		}
		cout << count << endl;
	}


	return 0;
}