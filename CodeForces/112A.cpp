#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string a, b;
    int count = 0;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    if (a < b)
        cout << -1;
    else if (a > b)
        cout << 1;
    else
        cout << 0;
}