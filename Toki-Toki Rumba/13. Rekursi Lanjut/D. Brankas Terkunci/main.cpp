#include <bits/stdc++.h>

using namespace std;

int N, K, catat[10];

void tulisMenaik(int kedalaman)
{
    //cout << kedalaman << endl;
    
    if(kedalaman >= N)
    {
        //cout <<"a\n";
            for(int i = 0; i < N; i++)
                cout << catat[i] << ' ';
            cout << '\n';   
    }
    else
    {
        //cout << "b\n";
        for(int i = catat[kedalaman - 1] + 1; i <= K; i++)
        {
            //cout << kedalaman - 1<<"ini i " << i << endl;
            catat[kedalaman] = i;
            tulisMenaik(kedalaman + 1);
        }
    }
}

int main(void) 
{
    cin >> K >> N;
    tulisMenaik(0);   
    return 0;
}