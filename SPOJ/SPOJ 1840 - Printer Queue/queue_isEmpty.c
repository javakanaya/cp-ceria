/*
	fungsi untuk memeriksa kekosongan dari suatu queue
*/

#include <stdlib.h>
#include "printer.h"

int queue_isEmpty(Queue *queue) 
{
    return (queue->_front == NULL && queue->_rear == NULL);
}
