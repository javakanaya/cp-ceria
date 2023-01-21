#include <bits/stdc++.h>

using namespace std;

int main(void)
{   
    string s;
    cin >> s;

    int counter = 0;
    int sLen = s.length();

    for(int i = 0; i < sLen; i++)
    {
        if(s[i] == '4' || s[i] == '7')
            counter++;
    }

    if(counter == 4 || counter == 7)
        cout << "YES";
    else
        cout << "NO";
}