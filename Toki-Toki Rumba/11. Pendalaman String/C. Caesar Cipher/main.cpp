#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string S; 
    int K;
    cin >> S >> K;
    for(int i = 0; i < S.length(); i++)
        cout << (char)(((S[i] + K - 'a') % 26 ) + 'a');
}