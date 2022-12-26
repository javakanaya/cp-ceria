#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, xi, q, mi;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(x.begin(), x.end());

    cin >> q;
    while (q--)
    {
        cin >> mi;
        int l = 0, r = n;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if(mi >= x[mid])
                l = mid + 1;
            else 
                r = mid;
        }
        cout << l << endl;  
    }
}