#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int dCount = 0,
        aCount = 0;
    char temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 'A')
            aCount++;
        else
            dCount++;
    }
    if (aCount == dCount)
        cout << "Friendship";
    else if (aCount > dCount)
        cout << "Anton";
    else
        cout << "Danik";
}