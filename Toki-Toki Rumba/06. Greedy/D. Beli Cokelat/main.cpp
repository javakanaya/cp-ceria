#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(void)
{
    ll N, D, Hi, Bi, count = 0;
    cin >> N >> D;
    vector<pair<ll, ll>> daftar;
    for (ll i = 0; i < N; i++)
    {
        cin >> Hi >> Bi;
        daftar.push_back(make_pair(Hi, Bi));
    }
    sort(daftar.begin(), daftar.end());
    for (ll i = 0; i < N; i++)
    {
        if(D == 0)
            break;
        while (D >= daftar[i].first && daftar[i].second > 0)
        {
            D -= daftar[i].first;
            daftar[i].second--;
            count++;
        }
    }
    cout << count << endl;
}