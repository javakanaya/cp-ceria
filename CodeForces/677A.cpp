#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, h, ai, sum = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> ai;
        if (ai <= h)
            sum += 1;
        else
            sum += 2;
    }
    cout << sum;
    return 0;
}