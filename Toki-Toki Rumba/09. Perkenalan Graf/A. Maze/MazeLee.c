/*
    Using Lee Algorithm
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int M, N;
int maze[101][101];
int visited[101][101];

/* Struktur Node */

typedef struct queueNode_t {
    int x,
        y,
        dist;
    struct queueNode_t *next;
} QueueNode;

/* Struktur ADT Queue */

typedef struct queue_t {
    QueueNode   *_front, 
                *_rear;
    unsigned _size;
} Queue;

/* Function definition below */

void queue_init(Queue *queue)
{
    queue->_size = 0;
    queue->_front = NULL;
    queue->_rear = NULL;
}

bool queue_isEmpty(Queue *queue) {
    return (queue->_front == NULL && queue->_rear == NULL);
}

void queue_push(Queue *queue, int x, int y, int dist)
{
    QueueNode *newNode = (QueueNode*) malloc(sizeof(QueueNode));
    if (newNode) {
        queue->_size++;
        newNode->x = x;
        newNode->y = y;
        newNode->dist = dist;
        newNode->next = NULL;
        
        if (queue_isEmpty(queue))                 
            queue->_front = queue->_rear = newNode;
        else {
            queue->_rear->next = newNode;
            queue->_rear = newNode;
        }
    }
}

void queue_pop(Queue *queue)
{
    if (!queue_isEmpty(queue)) {
        QueueNode *temp = queue->_front;
        queue->_front = queue->_front->next;
        free(temp);
        
        if (queue->_front == NULL)
            queue->_rear = NULL;
        queue->_size--;
    }
}

int queue_frontX(Queue *queue)
{
    if (!queue_isEmpty(queue)) {
        return (queue->_front->x);
    }
    return (int) 0;
}

int queue_frontY(Queue *queue)
{
    if (!queue_isEmpty(queue)) {
        return (queue->_front->y);
    }
    return (int) 0;
}

int queue_frontDist(Queue *queue)
{
    if (!queue_isEmpty(queue)) {
        return (queue->_front->dist);
    }
    return (int) 0;
}

int isAman(int cekM, int cekN)
{
    return (cekM < M && cekN < N && maze[cekM][cekN] == 0 && visited[cekM][cekN] == 0);
}

int cariRuteTerpendek(int A, int B)
{
    Queue q;
    queue_init(&q);

    int row[4] = { -1, 0, 1, 0 };
    int col[4] = { 0, -1, 0, 1 };

    visited[A][B] = 1;
    queue_push(&q, A, B, 1);

    int minJarak = 999;

    while(!queue_isEmpty(&q))
    {
        // printf("test\n");
        int i = queue_frontX(&q),
            j = queue_frontY(&q),
            dist = queue_frontDist(&q);
        queue_pop(&q);


        // printf("trio %d %d %d\n", i, j, dist);

        if (i == M - 1 || i == 0 || j == N - 1 || j == 0)
        {
            // printf("minJarak : %d\n", minJarak);
            minJarak = dist;
            break;
        }
        for (int k = 0; k < 4; k++)
        {
            // printf("cek i: %d cek j: %d\n", i + row[k], j + col[k]);
            if(isAman(i + col[k], j + row[k]))
            {
                visited[i + col[k]][j + row[k]] = 1;
                // printf("masuk sini gak?\n");
                queue_push(&q, i + col[k], j + row[k], dist + 1);
            }
        }
    }

    return minJarak;
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

    printf("%d", cariRuteTerpendek(A - 1, B - 1));
}