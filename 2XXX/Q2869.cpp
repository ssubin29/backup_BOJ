#include <iostream>
using namespace std;

int main()//2869�� �����̴� �ö󰡰� �;�
{
	int A, B, V;
	cin >> A >> B >> V;
	int R = (V - A) % (A - B);
	int Q = (V - A) / (A - B);
	if (R == 0) { cout << Q + 1 << endl; }
	else { cout << Q + 2 << endl; }
	return 0;
}