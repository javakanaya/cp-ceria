/*
	fungsi untuk mendapatkan data pada posisi
	top pada suatu priority queue
*/

#include "printer.h"

int pqueue_top(PriorityQueue *pqueue) 
{
    if (!pqueue_isEmpty(pqueue))
        return pqueue->_top->data;
    else return 0;
}
