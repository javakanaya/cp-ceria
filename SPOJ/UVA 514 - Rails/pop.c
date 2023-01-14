/*
	fungsi untuk menghapus nilai teratas
	yang ada di dalam stack
*/

// pemanggilan standard header file
#include <stdlib.h>

// pemanggilan user defined header file
#include "rails.h"

void pop(Stack *stack) // nama stack
{
	// hanya akan dijalankan jika stack tidak kosong
    if (!isEmpty(stack)) 
	{
		// menginisiasi variabel temp dengan pointer ke node teratas
        StackNode *temp = stack->top;
        
        // menyimpan nilai node setelah top ke dalam node op 
        stack->top = stack->top->next;
        
        // menghapus node temp yang merupakan pointer ke node teratas
        free(temp);
    }
}
