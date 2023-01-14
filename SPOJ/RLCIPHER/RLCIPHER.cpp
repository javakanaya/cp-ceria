#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int res[7] = {-4, -3, -2, -4, -4, -3, -4};
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        while (n--)
        {
            long ni;
            cin >> ni;
            if (ni < 0)
                printf("%d ", ni);
            else
            {
                if (ni > 6)
                    printf("-4 ");
                else
                    printf("%d ", res[ni]);
            }
        }
        printf("\n");
    }
}