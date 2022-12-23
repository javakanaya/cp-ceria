/*
    took longer time
*/

#include <stdio.h>

int M, N;
int maze[101][101];
int visited[101][101];

int isAman(int cekM, int cekN)
{
    return (cekM < M && cekN < N && maze[cekM][cekN] == 0 && visited[cekM][cekN] == 0);
}

void cekRute(int A, int B, int jarak, int *minJarak)
{
    if (maze[A][B] != -1 && A == M - 1 || A == 0 || B == N - 1 || B == 0)
    {
        // printf("\n---------------------------\n\n");
        if (jarak < *minJarak)
            *minJarak = jarak;
        return;
    }

    visited[A][B] = 1;
    
    if(isAman(A - 1, B))
    {
        // printf("atas\n");
        cekRute(A - 1, B, jarak + 1, minJarak);
    }
    if(isAman(A, B + 1))
    {
        // printf("kanan\n");
        cekRute(A, B + 1, jarak + 1, minJarak);
    }
    if(isAman(A, B - 1))
    {
        // printf("kiri\n");
        cekRute(A, B - 1, jarak + 1, minJarak);
    }
    if(isAman(A + 1, B))
    {
        // printf("bawah\n");
        cekRute(A + 1, B, jarak + 1, minJarak);
    }
    // printf("min terkini %d\n", *minJarak);

    // backtrack
    // printf("posisi %d %d\n", A, B);
    visited[A][B] = 0;
}

int cariRutePendek(int A, int B)
{
    int minJarak = 999;
    int *ptr = &minJarak;
    cekRute(A, B, 1, ptr);

    if(minJarak != 999)
        return minJarak;
    
    return -1;

}
int main(void)
{
    int A, B;
    scanf("%d %d", &M, &N);

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &maze[i][j]);
            // printf("%d ", maze[i][j]);
        }
        // printf("\n");
    }
    scanf("%d %d", &A, &B);

    printf("%d", cariRutePendek(A - 1, B - 1));
}