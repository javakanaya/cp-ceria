/*
	fungsi untuk menghapus data pada posisi
	front pada suatu queue
*/

#include <stdlib.h>
#include "printer.h"

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
