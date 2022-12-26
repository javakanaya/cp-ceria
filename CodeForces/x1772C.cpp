#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> k >> n;
        int a[k];
        a[0] = 1;
        int d = 1;
        for (int i = 1; i < k; i++)
        {
            if (d < 0)
            {
                a[i] = a[i - 1] + 1;
                continue;
            }
            int x = a[i - 1] + d;
            if (n - x < k - i)
            {
                a[i] = a[i - 1] + 1;
                d = -1;
            }
            else{
                a[i] = x;
                d++;
            }
        }
        for(int i = 0; i < k; i++)
        {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
}
