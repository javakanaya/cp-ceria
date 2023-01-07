/*
	fungsi untuk mendapatkan data indeks pada posisi
	top pada suatu queue
*/

#include "printer.h"

int queue_front_index(Queue *queue)
{
    if (!queue_isEmpty(queue)) 
        return (queue->_front->index);
    return (int)0;
}
