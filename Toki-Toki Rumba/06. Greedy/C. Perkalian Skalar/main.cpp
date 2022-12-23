#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(void)
{
    ll N;
    cin >> N;
    vector<ll> a(N), b(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];
    for (int i = 0; i < N; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll result = 0;
    for (int i = 0; i < N; i++)
        result += a[i] * b[N - i - 1];

    cout << result;
}