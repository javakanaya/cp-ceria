#include <bits/stdc++.h>

using namespace std;

void drawMountain(int n)
{
    if(n == 0)
        return;
    drawMountain(n-1);
    for(int i = 0; i < n; i++)
        cout<<'*';
    cout<<'\n';
    drawMountain(n-1);
}

int main(void)
{
    int n;
    cin >> n;
    drawMountain(n);
}