/*
	fungsi untuk inisiasi priority queue
*/

#include <stdlib.h>
#include "printer.h"

void pqueue_init(PriorityQueue *pqueue)
{
	// top diinisiasi dengan NULL
    pqueue->_top = NULL;
    
    // size diinisiasi dengan 0
    pqueue->_size = 0;
}
