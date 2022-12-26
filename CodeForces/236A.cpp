#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    unordered_set<char> setS;
    for(int i = 0; i < s.size(); i++){
        setS.insert(s[i]);
    }

    if(setS.size() % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}