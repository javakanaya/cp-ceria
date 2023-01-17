#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w, total = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        total += k * i;

    int kurang = n - total;
    if (kurang < 0)
        cout << -kurang;
    else
        cout << 0;
    return 0;
}