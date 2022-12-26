#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            while(b--)
            {
                char ud;
                cin >> ud;
                if(ud == 'D')
                {
                    if (a[i] != 9)
                        a[i] += 1;
                    else
                        a[i] = 0;
                }
                else
                {
                    if (a[i] != 0)
                        a[i] -= 1;
                    else
                        a[i] = 9;
                }
            }
        }
        for(int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << '\n';
    }
}
