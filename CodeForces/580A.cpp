#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int countCurr = 0, count = 0;
    int ab = 0, aa;
    for(int i = 0; i < n; i++)
    {
        cin >> aa;
        if(ab > aa)
        {
            count = max(count, countCurr);
            countCurr = 0;
        }
        countCurr++;
        ab = aa;
    }
    count = max(count, countCurr);
    cout << count << endl;
    
}