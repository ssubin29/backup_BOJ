#include <iostream>
using namespace std;
//A는 65 Z는 90 a는 97 z는 122
int main()
{
    int index[26];
    string ans;
    bool haveS = false;
    cin >> ans;

    for (int i = 0; i < 26; i++)
    {
        index[i] = 0;
    }

    //printf("%c", N);//아스키코드값에 해당하는 문자 찾기
    for (int i = 65; i < 91; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            if (i == (int)ans[j])
            {
                index[i - 65]++;
            }
            if ((int)ans[j] >= 97 && i == (int)ans[j] - 32)
            {
                index[i - 65]++;
            }
        }
    }

    int max = index[0];
    int theN = 0;
    for (int i = 0; i < 26; i++)
    {
        if (index[i] > max)
        {
            max = index[i];
            theN = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (max == index[i] && theN != i)
        {
            cout << "?" << endl;
            haveS = true;
            break;
        }
    }

    if (haveS == false)
    {
        printf("%c", theN + 65);
    }

    return 0;
}
