#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' ||
            s[i] == 'i' ||
            s[i] == 'u' ||
            s[i] == 'e' ||
            s[i] == 'o' ||
            s[i] == 'y')
            continue;
        cout << '.' << s[i];
    }
}