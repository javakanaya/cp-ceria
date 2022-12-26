#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, ai;

    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    k--;
    if (a[k] == 0)
    {
        int i;
        for(i = 0; a[i] > a[k] && i < k; i++);
        cout << i << endl;
    }
    else
    {
        int i;
        for (i = k; a[i] >= a[k] && i < n; i++);
        cout << i << endl;
    }
    return 0;
}