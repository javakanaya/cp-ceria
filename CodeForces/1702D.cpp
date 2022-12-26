#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >>t;
    while(t--)
    {
        string w;
        int p, cost = 0;
        cin >> w >> p;

        string sortW(w);

        sort(sortW.rbegin(), sortW.rend());

        for(int i = 0; i < w.length(); i++)
            cost += w[i] - 'a' + 1;

        map <char, int> deleted;

        for(int i = 0; i < sortW.length(); i++)
        {
            if(cost > p)
            {
                deleted[sortW[i]]++;
                cost -= sortW[i] - 'a' + 1;
            }
        }

        for(int i = 0; i < w.length(); i++)
        {
            if(deleted[w[i]] > 0)
            {
                deleted[w[i]]--;
                continue;
            }
            cout << w[i];
        }
        cout << '\n';
    }
}