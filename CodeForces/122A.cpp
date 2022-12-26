#include <bits/stdc++.h>

using namespace std;

bool isLucky(int num)
{
    string x = to_string(num);
    set<int> fourSeven;

    for (int i = 0; i < x.length(); i++)
        fourSeven.insert(x[i] - '0');

    // for (auto i : fourSeven)
    //     cout << i << ' ';
    // cout << '\n';
    // cout << fourSeven.size() << ' ' << fourSeven.count(4) << ' ' << fourSeven.count(7) << endl;
    
    if (fourSeven.size() <= 2)
    {
        if (fourSeven.size() == 2)
        {
            if (fourSeven.count(4) && fourSeven.count(7))
                return true;
            else
                return false;
        }
        else if (fourSeven.size() == 1)
        {
            if (fourSeven.count(4) || fourSeven.count(7))
                return true;
            else
                return false;
        }
    }
    else
        return false;
}

int main(void)
{
    int n;
    cin >> n;
    //cout << (int)isLucky(n) << endl;
    for (int i = 1; i <= n; i++)
    {
        if (isLucky(i) && n % i == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
