#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << 2 << endl;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                for(int j = i; j <= n; j *=2 )
                    cout << j << ' ';        
            }
        }
        cout <<'\n';
    }
}