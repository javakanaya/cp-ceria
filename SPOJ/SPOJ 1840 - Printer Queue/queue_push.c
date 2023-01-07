/*
	fungsi untuk memasukan nilai ke dalam queue
	nilai yang dimasukan terdiri dari dua yaitu, nilai untuk priorita
	dan nilai untuk indeks.
*/

#include <stdlib.h>
#include "printer.h"

void queue_push(Queue *queue, int value, int index)
{
	// inisiasi node baru untuk menyimpan data-data yang akan dimasukkan di dalam list
    QueueNode *newNode = (QueueNode*) malloc(sizeof(QueueNode));
    
	// jika node baru bukanlah NULL
	if (newNode) 
	{
		// increment nilai size
        queue->_size++;
        
        // inisiasi node baru dengan data-data yang akan ditambahkan
        newNode->data = value;
        newNode->index = index;
        newNode->next = NULL;
        
        // jika queue masih kosong maka rear dan front diinisasi dengan node baru
        if (queue_isEmpty(queue))                 
            queue->_front = queue->_rear = newNode;
        
		// jika queue tidak kosong node baru akan diletakkan di posisi rear
		else 
		{
            queue->_rear->next = newNode;
            queue->_rear = newNode;
        }
    }
}
