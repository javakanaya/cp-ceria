#include <iostream>

using namespace std;

int main() 
{
    int n, res = 0;
    cin >> n;
    while(n--)
    {
        string x;
        cin >> x;
        if(x[1] == '+')
            res++;
        else
            res--;
    }
    cout << res << endl;
    
}