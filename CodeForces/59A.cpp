#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    cin >> s;

    int sLen = s.length(),
        lowCount = 0,
        upCount = 0;
    for (int i = 0; i < sLen; i++)
    {
        if (65 <= s[i] && s[i] <= 90)
            upCount++;
        else
            lowCount++;
    }

    if (lowCount >= upCount)
    {
        for (int i = 0; i < sLen; i++)
        {
            if (65 <= s[i] && s[i] <= 90)
                cout << (char)(s[i] + 32);
            else
                cout << (char)s[i];
        }
    }
    else
    {
        for (int i = 0; i < sLen; i++)
        {
            if (65 <= s[i] && s[i] <= 90)
                cout << (char)s[i];
            else
                cout << (char)(s[i] - 32);
        }
    }
}