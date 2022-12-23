#include <stdio.h>
#include <math.h>

int arr[100001];
int main(void)
{
    int N, mod, max = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &mod);
        arr[mod] += 1;
    }
    for(int i = 100000; i > 0; i--)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            mod = i;
        } 
    }
    printf("%d", mod);
    return 0;
}