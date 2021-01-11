#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    double* num = new double[N];
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    int M = num[0];
    for (int i = 0; i < N; i++)
        if (M < num[i])
            M = num[i];

    double* newNum = new double[N];
    double sum = 0;
    double newSum = 0;

    for (int i = 0; i < N; i++) {
        newNum[i] = num[i] / M * 100;
        sum += num[i];
        newSum += newNum[i];
    }

    //double average = (double)(sum / 100 * M);
    double average = (double)(sum);
    double newAverage = newSum / N;
    //cout << average << " ";
    cout << newAverage << endl;

    return 0;
}