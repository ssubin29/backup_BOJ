#include <iostream>
using namespace std;
//A�� 65 Z�� 90 a�� 97 z�� 122
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

    //printf("%c", N);//�ƽ�Ű�ڵ尪�� �ش��ϴ� ���� ã��
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
