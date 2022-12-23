#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(void)
{
    int N;
    ll price[10], M;

    cin >> N;
    for (int i = 0; i <= N; i++)
        cin >> price[i];
    cin >> M;

    // harga minimal, tidak termasuk digit 0
    pair<ll, ll> minCost = {LLONG_MAX, LLONG_MAX}; // price - digit
    for (int i = 1; i <= N; i++)
    {
        minCost = min(minCost, {price[i], i});
        // cout << minCost.first << minCost.second << endl;
    }

    // jika dana tidak cukup
    if (M < minCost.first)
    {
        // karena minCost tidak menghitung yang di digit 0
        // dicek dulu yang di digit 0
        if (M < price[0])
            cout << 0 << endl;
        else
            cout << 1 << '\n'
                 << 0 << '\n'
                 << 0 << endl;
        return 0;
    }

    // array untuk nyimpen digit yang udah dibeli, dan jumlahnya berapa
    ll buyed[10] = {0};

    // minCost tercekuali digit 0 sudah pasti dibeli
    buyed[minCost.second] = 1;
    M -= minCost.first;

    // minCost termasuk digit 0
    minCost = min(minCost, {price[0], 0});
    // digit dengan minCost dibeli dengan jumlah M/minCost.first
    buyed[minCost.second] += M / minCost.first;
    M %= minCost.first;

    // printf("\nawal:\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << buyed[i] << ' ';
    // }
    // cout << '\n'
    //      << M << '\n'
    //      << endl;

    for (int i = N; i > 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {

            ll addCost = price[i] - price[j]; // selisih harga
            ll buy = LLONG_MAX;
            if (addCost > 0)
                buy = M / addCost; // bisa nuker ke digit yang lain sebanyak berapa
            // printf("buy : %lld, addCost : %lld, sisa M : %lld\n", buy, addCost, M);
            // jika bia dituker semua sehingga bisa dapet digit maksimum
            if (buy >= buyed[j])
            {
                M -= buyed[j] * addCost;
                buyed[i] += buyed[j];
                buyed[j] = 0;
            }
            // jika bisa dituker sebagian sehingga bisa dapet digit maksimum
            else
            {
                M -= buy * addCost;
                buyed[i] += buy;
                buyed[j] -= buy;
            }

            // for (int i = 0; i < 10; i++)
            // {
            //     cout << buyed[i] << ' ';
            // }
            // cout << '\n';
        }
    }

    // total digit buyed
    ll total = 0;
    for (int i = 0; i <= N; i++)
    {
        total += buyed[i];
    }
    cout << total << endl;

    int len = 0;
    string ans = "";
    // besar ke kecil
    for (int i = N; i >= 0; i--)
    {
        for (int j = 1; j <= buyed[i]; j++)
        {
            if (len == 50)
                break;
            ans += ('0' + i);
            len++;
        }
    }

    cout << ans << endl;

    len = 0;
    ans = "";
    // kecil ke besar
    for (int i = 0; i <= N; i++)
    {
        for (int j = 1; j <= buyed[i]; j++)
        {
            if (len == 50)
                break;
            ans += ('0' + i);
            len++;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}