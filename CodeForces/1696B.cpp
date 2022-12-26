#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, aib = 0, aia, count = 0;;
        cin >> n;
        while (n--)
        {
            cin >> aia;
            if(aia && !aib)
                count++;
            aib = aia;
        }
        cout << min(count, 2) << endl;
    }
    return 0;
}
