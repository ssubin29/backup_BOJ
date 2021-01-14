#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;
	string a = "";
	string b = "";
	for (int i = 2; i >= 0; i--)
	{
		a += A[i];
		b += B[i];
	}
	cout << ((stoi(a) > stoi(b)) ? a : b) << endl;

	return 0;
}