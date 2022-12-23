#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(void)
{
    ll N, B, sum = 0;
    cin >> N >> B;
    vector<ll> H(N);

    for (ll i = 0; i < N; i++)
        cin >> H[i];

    sort(H.begin(), H.end());

    int i = N - 1, count = 0;
    while (sum <= B)
    {
        sum += H[i];
        i--;
        count++;
    }

    cout << count << endl;
}