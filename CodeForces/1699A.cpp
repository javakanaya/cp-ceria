#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 2)
            cout << "-1" << endl;
        else
            cout << "0 0 " << n/2 << endl;
    }
    return 0;
}