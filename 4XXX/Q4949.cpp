#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main()
{
	while (true)
	{
		string s; cin >> s;
		stack <int> bracket_B;
		stack <int> bracket_S;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '[') { bracket_B.push(1); }
			else if ((s[i] == ']') && !(bracket_B.empty())) { bracket_B.pop(); }
			else if (s[i] == '(') { bracket_S.push(1); }
			else if ((s[i] == ')') && !(bracket_S.empty())) { bracket_S.pop(); }
			else if (s[i] == '.') { break; }
			else {}
		}
		if ((bracket_B.empty()) && (bracket_S.empty()))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}

	}
	return 0;
}
