#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string S;
    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        if (isupper(S[i]))
            cout << '_' << (char)tolower(S[i]);
        if(S[i] == '_')
            cout << (char)toupper(S[i + 1]);  
        if(S[i-1] != '_' && islower(S[i]))
            cout << char(S[i]);
    }
}