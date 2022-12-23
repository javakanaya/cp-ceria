#include <bits/stdc++.h>

using namespace std;

bool deleted[1000];

int main(void)
{
    int N, M, Ni, Mi, count = 0;
    vector<int> bebek, sepatu;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> Ni;
        bebek.push_back(Ni);
    }

    for (int i = 0; i < M; i++)
    {
        cin >> Mi;
        sepatu.push_back(Mi);
    }

    sort(sepatu.begin(), sepatu.end());
    sort(bebek.begin(), bebek.end());

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (!deleted[j] && (bebek[i] == sepatu[j] || bebek[i] == sepatu[j] - 1))
            {
                count++;
                deleted[j] = 1;
                break;
            }
        }
    }
    cout << count << endl;
}