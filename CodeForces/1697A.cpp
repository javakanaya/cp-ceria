#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, ai, count = 0;
        cin >> n >> m;
        while(n--)
        {
            cin >> ai;
            count += ai;
        }
        if(m >= count)
            cout << 0 << endl;
        else
            cout << count - m << endl;
    }

}