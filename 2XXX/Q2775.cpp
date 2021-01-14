#include <iostream>
using namespace std;

int apartM[15][14] = { 0, };

int findRoomMember(int floor, int room)
{
	if (floor == 0 || room == 0) { return ++room; }
	else { return findRoomMember(floor - 1, room) + findRoomMember(floor, room - 1); }
}

int main()
{
	int count, i; cin >> count;

	for (i = 0; i < count; i++)
	{
		int k, n;	cin >> k >> n;
		cout << findRoomMember(k, n - 1) << endl;
	}

	return 0;
}