#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string num;
        cin >> num;
        //cout << " length " << num.length() << endl;;
        if(num.length() == 1)
            cout << num[0] - '1' << endl;
        else
        {
            if(num[0] == '1')
                cout << stoi(&num[1]) << endl;
            else
            {
                num[0] = num[0] - 1;
                cout << num << endl;
            }
        } 
    }
    return 0;
}