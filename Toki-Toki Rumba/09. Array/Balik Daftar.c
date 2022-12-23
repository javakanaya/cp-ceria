#include <stdio.h>
#include <math.h>

int main(void)
{
    int arr[105], i = 0;
    while(scanf("%d", &arr[i]) != EOF)
    {
        i++;
    }
    while(i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}