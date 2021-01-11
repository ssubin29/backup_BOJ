#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int count = 0;
    bool findW = false;
    int S = input.size();
    for (int i = 0; i < S; i++)
    {
        if (input[i] == ' ') findW = false;
        else if (findW == false && input[i] != ' ')
        {
            count++; findW = true;
        }
    }
    printf("%d", count);
    return 0;
}