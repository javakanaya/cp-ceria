/*
	fungsi untuk inisiasi queue
*/

#include <stdlib.h>
#include "printer.h"

void queue_init(Queue *queue)
{
	// size diinisiasi dengan 0
    queue->_size = 0;
    
    // front diinisiasi dengan NULL
    queue->_front = NULL;
    
    // front diinisiasi dengan NULL
    queue->_rear = NULL;
}
