#include <iostream>
using namespace std;

int main()
{
    int N; //°íÁ¤
    cin >> N;
    int lists[3] = {};
    int count, div_N, theN;
    int listCount = 0;

    if (N < 100) printf("%d ", N);
    else //(N>=100)
    {
        for (int i = 100; i <= N; i++)
        {
            theN = i; div_N = theN; count = 0;
            while (theN != 0)
            {
                div_N = theN % 10;
                theN /= 10;
                lists[count] = div_N;
                count++;
                if (count == 3) break;
            }
            if ((lists[0] - lists[1] == lists[1] - lists[2]) && i != 1000) listCount++;
        }
        printf("%d", 99 + listCount);
    }
    return 0;
}