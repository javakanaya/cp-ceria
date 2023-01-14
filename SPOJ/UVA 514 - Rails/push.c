/*
	fungsi untuk menambahkan nilai ke dalam stack
	nilai yang ditambahkan disimpan di dalam node teratas
*/

// pemanggilan standard header file
#include <stdlib.h>

// pemanggilan user defined header file
#include "rails.h"

void push(Stack *stack, // nama stack 
		  int value) 	// nilai yang akan ditambahkan
{
	// alokasi memori ke node baru
    StackNode *newNode = (StackNode*) malloc(sizeof(StackNode));
    
    // memastikan bahwwa node telah sukses mendapat alokasi memori
	if (newNode) {
		// menginisiasi data di node dengan nilai yang akan dimasukan
        newNode->data = value; 
        
        // jika stack masih kosong
        if (isEmpty(stack))
		{
			// menginisiasi node setelah newNode dengan NULL
			newNode->next = NULL;
		} 
		// jika tidak maka nilai node setelah newNode diinisiasi dengan nilai pertama yang ada pada stack
        else newNode->next = stack->top;
		
		// menyimpan nilai newNode ke dalam node pertama di dalam stack
        stack->top = newNode;
    }
}
