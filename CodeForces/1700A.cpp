#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    unsigned long long t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << (((m - 1) * m) / 2) + (m * (n * (n + 1)) / 2) << endl;
    }
    return 0;
}