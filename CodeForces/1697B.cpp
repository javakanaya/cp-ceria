#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(void)
{
    ll n, q, pi, xi, yi;
    cin >> n >> q;
    vector<ll> p(n),
        sum(n + 1, 0);

    for (int i = 0; i < n; i++)
        cin >> p[i];

    sort(p.begin(), p.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << p[i] << ' ';
    // }
    // cout << '\n';

    for (int i = 0; i < n; i++)
    {
        sum[i + 1] = sum[i] + p[i];
    }

    // for (int i = 0; i < n + 1; i++)
    // {
    //     cout << sum[i] << ' ';
    // }
    // cout << '\n';

    while (q--)
    {
        cin >> xi >> yi;
        //cout << sum[n - xi + yi] << " - " << sum[n - xi] << " = ";
        cout << sum[n - xi + yi] - sum[n - xi] << endl;
    }
}