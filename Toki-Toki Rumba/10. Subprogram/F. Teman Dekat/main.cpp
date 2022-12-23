#include <bits/stdc++.h>

using namespace std;

int tingkatKedekatan(int Xi, int Xj, int Yi, int Yj, int D)
{
    return pow(abs(Xj - Xi), D) + pow(abs(Yj - Yi), D);
}

int main(void)
{
    int N, D, Xi, Yi,
        terkecil = 99999999,
        terbesar = -99999999,
        curr;
    cin >> N >> D;

    int X[N], Y[N];
    for (int i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            curr = tingkatKedekatan(X[i], X[j], Y[i], Y[j], D);
            if (curr < terkecil)
                terkecil = curr;
            if (curr > terbesar)
                terbesar = curr;
        }
    }

    cout << terkecil << ' ' << terbesar;

    return 0;
}