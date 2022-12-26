#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, s[5] = {0};
    cin >> n;
    while (n--)
    {
        int si;
        cin >> si;
        s[si]++;
    }
    int total = s[4] + s[3] + s[2] / 2;
    s[1] -= s[3];
    if (s[2] % 2)
    {
        total++;
        s[1] -= 2;
    }
    if (s[1] > 0)
    {
        total += s[1] / 4;
        if (s[1] % 4)
            total++;
    }
    cout << total;
    return 0;
}