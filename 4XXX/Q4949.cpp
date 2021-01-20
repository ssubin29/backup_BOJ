#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int count; string s;
	while (true)
	{
		getline(cin, s);
		if (s.length() == 1 && s[0] == '.') { break; }
		count = 0;
		stack <int> bracket;
		while (s[count] != '.')
		{
			if (s[count] == '[') { bracket.push('['); }
			else if ((s[count] == ']'))
			{
				if (bracket.empty()) { bracket.push(0); break; }
				if (bracket.top() == '[') { bracket.pop(); }
			}
			else if (s[count] == '(') { bracket.push('('); }
			else if ((s[count] == ')'))
			{
				if (bracket.empty()) { bracket.push(0); break; }
				if (bracket.top() == '(') { bracket.pop(); }
			}
			count++;
		}
		if (bracket.empty()) { cout << "yes" << endl; }
		else { cout << "no" << endl; }
	}
	return 0;
}
