#include <bits/stdc++.h>

using namespace std;

void cek(int i, int *N)
{
    int pangkat = 0;
    while (*N % i == 0)
    {
        pangkat++;
        *N /= i;
    }
    if (pangkat == 1)
        cout << i;
    else
        cout << i << '^' << pangkat;

    if (*N > 1)
        cout << " x ";
}

int main(void)
{
    int N;
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        if (N % i == 0)
            cek(i, &N);
    }
}