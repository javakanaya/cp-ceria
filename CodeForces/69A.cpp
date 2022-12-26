#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n,
        xi,
        yi,
        zi,
        x = 0,
        y = 0,
        z = 0;
    cin >> n;
    while (n--)
    {
        cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;
    }
    if (!x && !y && !z)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}