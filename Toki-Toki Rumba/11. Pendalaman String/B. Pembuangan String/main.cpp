#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string S, T;
    cin >> S >> T;
    while(S.find(T) != -1)
        S = S.erase(S.find(T), T. length());

    cout << S;
}
