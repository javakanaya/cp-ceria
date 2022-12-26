#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, count = 0;
    cin >> t;

    vector<int> le(2001, 0), ri(2001, 0);

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        count += le[1000 + x - y] + ri[x + y];
        le[1000 + x - y]++;
        ri[x + y]++;

        // cout << count << endl;
    }
    cout << count << endl;
}