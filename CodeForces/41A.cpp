#include <bits/stdc++.h>

using namespace std;

int main(void){
    string s, t;
    cin >> s >> t;
    int len = s.length();
    int j = len - 1;
    for(int i = 0; i < len; i++)
    {
        if(j < 0 || s[i] != t[j]){
            cout << "NO";
            return 0;
        }
        j--;
    }
    cout << "YES";
}