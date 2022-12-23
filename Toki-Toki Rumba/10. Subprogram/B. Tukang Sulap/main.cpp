#include <bits/stdc++.h>

using namespace std;

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main(void)
{
    int N;
    cin >> N;
    int AB[2][N];
    for (int i = 0; i < N; i++)
        cin >> AB[0][i];
    for (int i = 0; i < N; i++)
        cin >> AB[1][i];

    int intP, intQ, x, y, T;
    string P, Q;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        cin >> P >> x >> Q >> y;
        intP = P[0]-'A';
        intQ = Q[0]-'A';
        x--;
        y--;
        swap(AB[intP][x], AB[intQ][y]);
    }

    for (int i = 0; i < N; i++)
        cout << AB[0][i] << ' ';
    cout << '\n';
    for (int i = 0; i < N; i++)
        cout << AB[1][i] << ' ';
    
}