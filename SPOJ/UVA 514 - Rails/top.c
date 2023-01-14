/*
	fungsi untuk mendapatkan nilai teratas
	yang ada di dalam stack
*/

// pemanggilan user define header file
#include "rails.h"

int top(Stack *stack) // nama stack 
{
	// memeriksa apakah stack kosong atau tidak
    if (!isEmpty(stack)) 
    {
    	// jika tidak kosong akan mengembalikan nilai yang disimpan di node top
        return stack->top->data;
	}
	// jika stack kosong akan mengembalikan nilai RogueValue
    return RogueValue;
}
