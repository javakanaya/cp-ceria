// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(void)
{
    int N, left;
    cin >> N;

    cout << N / 3600 <<  endl;
    left = N % 3600;
    if (left)
        cout << left / 60 <<  endl;
    else 
        cout << 0 <<  endl;

    left = left % 60;
    if (left)
        cout << left  <<  endl;
    else 
        cout << 0 <<  endl;
    return 0;
}