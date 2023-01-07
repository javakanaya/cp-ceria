/*
	fungsi untuk memeriksa kekosongan dari priority queue
*/

#include <stdlib.h>
#include "printer.h"

int pqueue_isEmpty(PriorityQueue *pqueue) 
{
    return (pqueue->_top == NULL);
}
