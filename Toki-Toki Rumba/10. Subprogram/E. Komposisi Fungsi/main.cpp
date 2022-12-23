#include <bits/stdc++.h>

using namespace std;

int fungsiDengklek(int A, int B, int x)
{
    return abs(A*x + B);
}

int main(void)
{
    int A, B, x, k;
    cin >> A >> B >> k >> x;

    for(int i = 0; i < k; i++)
        x = fungsiDengklek(A, B, x);

    cout << x;

    return 0;
}