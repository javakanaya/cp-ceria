#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        string number;
        cin >> n >> number;
        for (long long i = 0; i < n; i++)
            number[i] = '9' - number[i] + '0';

        cout << "min 9 : " << number << endl;
        if (number[0] != '0')
            cout << number << endl;
        else
        {
            cout << number << endl;
        }
    }
    return 0;
}