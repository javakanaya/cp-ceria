#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sLen = s.length();
    bool capsMis;
    if (97 <= s[0] && s[0] <= 122)
    {
        capsMis = true;
    }

    for (int i = 1; i < sLen; i++)
    {
        if (97 <= s[i] && s[i] <= 122)
        {
            capsMis = false;
        }
    }

    if (capsMis)
    {
        for (int i = 0; i < sLen; i++)
        {
            if (97 <= s[i] && s[i] <= 122)
            {
                cout << (char)(s[i] - 32);
            }
            else
                cout << (char)(s[i] + 32);
        }
    }
    else
        cout << s;
}