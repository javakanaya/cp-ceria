/*
	fungsi untuk menghapus data yang tersimpan
	pada top pada suatu priority queue	
*/

#include <stdlib.h>
#include "printer.h"


void pqueue_pop(PriorityQueue *pqueue)
{
    if (!pqueue_isEmpty(pqueue)) {
        PQueueNode *temp = pqueue->_top;
        pqueue->_top = pqueue->_top->next;
        free(temp);
    }
}

