#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

/* Struktur Node */

typedef struct dnode_t {
    int data; 
    unsigned countData;
    struct dnode_t      \
        *next,
        *prev;
} DListNode;

typedef struct deque_t {
    DListNode           \
        *_head, 
        *_tail;
    unsigned _size;
} Deque;

/* Definisi Fungsi */

DListNode* __dlist_createNode(int value,int countValue)
{
    DListNode *newNode = \
        (DListNode*) malloc (sizeof(DListNode));
    
    if (!newNode) return NULL;
    newNode->data = value;
    newNode->countData = countValue;
    newNode->next = NULL;
    newNode->prev = NULL;

    return (DListNode*) newNode;
}

void deq_init(Deque *deque)
{
    deque->_head = deque->_tail = NULL;
    deque->_size = (unsigned) 0;
}

bool deq_isEmpty(Deque *deque) {
    return (deque->_head == NULL && \
            deque->_tail == NULL);
}

void deq_pushFront(Deque *deque, int value, int countValue)
{
    DListNode *newNode = __dlist_createNode(value, countValue);
    if (newNode) {
        deque->_size += countValue;
        if (deq_isEmpty(deque)) {
            deque->_head = newNode;
            deque->_tail = newNode;
            return;
        }

        newNode->next = deque->_head;
        deque->_head->prev = newNode;
        deque->_head = newNode;
    }
}

void deq_pushBack(Deque *deque, int value, int countValue)
{
    DListNode *newNode = __dlist_createNode(value, countValue);
    if (newNode) {
        deque->_size += countValue;
        if (deq_isEmpty(deque)) {
            deque->_head = newNode;
            deque->_tail = newNode;
            return;
        }

        deque->_tail->next = newNode;
        newNode->prev = deque->_tail;
        deque->_tail = newNode;
    }
}

int deq_front(Deque *deque) {
    if (!deq_isEmpty(deque)) {
        return (deque->_head->data);
    }
    return 0;
}

int deq_back(Deque *deque) {
    if (!deq_isEmpty(deque)) {
        return (deque->_tail->data);
    }
    return 0;
}

void deq_popFront(Deque *deque)
{
    if (!deq_isEmpty(deque)) {
        DListNode *temp = deque->_head;
        if (temp->countData > 0)
            temp->countData--;
        if (temp->countData == 0)
        {
            if (deque->_head == deque->_tail) {
                deque->_head = NULL;
                deque->_tail = NULL;
                free(temp);
            }
            else {
                deque->_head = deque->_head->next;
                deque->_head->prev = NULL;
                free(temp);
            }
        }
        deque->_size--;
    }
}

void deq_popBack(Deque *deque)
{
    if (!deq_isEmpty(deque)) {
        DListNode *temp = deque->_tail;
        if(temp->countData > 0)
            temp->countData--;
        if (temp->countData == 0)
        {
            if (deque->_head == deque->_tail) {
                temp = deque->_head;
                deque->_head = NULL;
                deque->_tail = NULL;
                free(temp);
            }
            else {
                temp = deque->_tail;
                deque->_tail = deque->_tail->prev;
                deque->_tail->next = NULL;
                free(temp);
            }
        }
        deque->_size--;
    }
}

int main(void)
{
    int n, balik = 0;
    Deque asik;
    deq_init(&asik);

    scanf("%d", &n);
    while(n--)
    {
        char ngapain[100];
        int x, y;
        scanf("%s", ngapain);
        if(ngapain[0] == 'a')
        {
            scanf("%d %d", &x, &y);
            if(balik)
            {
                deq_pushBack(&asik, x, y);
            }
            else
            {
                deq_pushFront(&asik, x, y);
            }

            printf("%d\n", asik._size);
        }
        else if(ngapain[0] == 'd')
        {
            scanf("%d", &y);
            if(balik == 0)
            {
                printf("%d\n", deq_back(&asik));
                while(y--)
                {
                    deq_popBack(&asik);
                }
            }
            else
            {
                printf("%d\n", deq_front(&asik));
                while(y--)
                {
                    deq_popFront(&asik);
                }
            }
        }
        else
        {
            if(balik)
                balik = 0;
            else
                balik = 1;
        }
    }
    return 0;
}
