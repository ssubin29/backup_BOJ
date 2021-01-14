#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int N, input, i; cin >> N;
	int sum = 0;
	stack <int> N_stack;
	for (i = 0; i < N; i++)
	{
		cin >> input;
		if (input == 0) { N_stack.pop(); }
		else { N_stack.push(input); }
	}
	for (i = 0; !N_stack.empty(); i++)
	{
		sum += N_stack.top();
		N_stack.pop();
	}
	cout << sum << endl;
	return 0;
}
