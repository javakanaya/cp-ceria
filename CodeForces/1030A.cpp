#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, i, sum = 0;
    cin >> n;
    while (n--)
    {
        cin >> i;
        if (i)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}