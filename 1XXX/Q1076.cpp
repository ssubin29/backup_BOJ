#include <iostream>
using namespace std;

int main()
{
    string colors[10] = { "black", "brown", "red", "orange",
        "yellow", "green", "blue", "violet", "grey", "white" };
    string A, B, C;
    cin >> A >> B >> C;
    int a, b;
    long long c;
    int i;
    for (i = 0; i < 10; i++)
    {
        if (A == colors[i])
        {
            a = i;
        }
        if (B == colors[i])
        {
            b = i;
        }
        if (C == colors[i])
        {
            c = 1;
            for (int j = 0; j < i; j++)
            {
                c *= 10;
            }
        }

    }
    cout << (10 * a + b) * c << endl;
    return 0;
}