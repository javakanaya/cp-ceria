#include <bits/stdc++.h>

using namespace std;

int main(void)
{
   string S;
   cin >> S;
   for(auto i: S)
   {
        if(isupper(i))
            cout << (char)tolower(i);
        else
            cout << (char)toupper(i);
   }
}