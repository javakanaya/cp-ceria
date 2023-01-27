#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        string siapa;
        cin >> N >> M >> siapa;

        int sesi1[N], sesi2[N], sesi3[N], idxSiapa;
        string peserta[N];
        bool lolos = false;

        for (int i = 0; i < M; i++)
        {
            cin >> peserta[i] >> sesi1[N] >> sesi2[N] >> sesi3[N];
            if (peserta[i].compare(siapa) == 0)
                idxSiapa = i;
        }

        if (M == 0)
            cout << "TIDAK" << endl;
        else
        {
            int mogaTertinggi = sesi3[idxSiapa];
            for (int i = 0; i < M; i++)
            {
                if (i != idxSiapa)
                {
                    if (sesi3[i] >= mogaTertinggi);
                    
                }
            }
        }
    }
}