/*
	fungsi untuk memeriksa 
	kekosongan/keterisian dari stack
*/

// pemanggilan standard header file
#include <stdlib.h>

// pemanggilan user defined header file
#include "rails.h"

int isEmpty(Stack *stack) // nama stack 
{
	// mengebalikan 1 atau 0 sesuai dengan kondisi yang ada pada top
    return (stack->top == NULL);
}

