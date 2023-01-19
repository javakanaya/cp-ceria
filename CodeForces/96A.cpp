#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    int counter = 1;
    char current = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i] == current)
            counter++;
        else {
            current = s[i];
            counter = 1;
        }

        if(counter == 7){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}