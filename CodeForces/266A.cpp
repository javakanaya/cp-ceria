#include <iostream>

using namespace std;

int main(void)
{
    int n,  count = 0;
    cin >> n;
    char s0, si;
    cin >> s0;
    for(int i = 1; i < n; i++)
    {
        cin >> si;
        if(si == s0)
        {
            count++;
        }
        s0 = si;

    }
    cout << count;
    return 0;
}