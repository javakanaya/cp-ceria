/*
	fungsi untuk memasukan nilai ke dalam priority queue
	nilai yang ditambahkan diurutkan 
	dengan nilai yang terbesar berada pada posisi top
	
*/

#include <stdlib.h>
#include "printer.h"

void pqueue_push(PriorityQueue *pqueue, int value)
{
	// deklarasi & inisiasi node temp, dan newNode
    PQueueNode *temp = pqueue->_top;
    PQueueNode *newNode = (PQueueNode*) malloc (sizeof(PQueueNode));
    newNode->data = value;
    newNode->next = NULL;

	/*
		jika node kosong, maka akan langsung ditambahkan ke pada posisi top
	*/
    if (pqueue_isEmpty(pqueue)) {
        pqueue->_top = newNode;
        return;
    }

	/*
		jika nilai yang dimasukkan lebih besar pada top, maka nilai akan dimasukan pada posisi top
		dan nilai yang sebelumnya ada di top menjadi ada di top->next
    */	
	if (value > pqueue->_top->data) {
        newNode->next = pqueue->_top;
        pqueue->_top = newNode;
    }
    
    /*
		jika nilai yang dimasukkan lebih kecil pada top, maka node temp
		akan menelusuri list hingga mencapai posisi yang sesuai, dan nilai yang dimasukkan 
		akan diletakkan pada posisi tersebut
    */
    else {
        while ( temp->next != NULL && temp->next->data > value)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
