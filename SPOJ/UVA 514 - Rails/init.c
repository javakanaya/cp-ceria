/*
	fungsi untuk memeriksa 
	kekosongan/keterisian dari stack
*/

// pemanggilan standard header file
#include <stdlib.h>

// pemanggilan user defined header file
#include "rails.h"

Stack* init(void)
{
	// menginisiasi stack np dengan alokasi memori
    Stack* np = (Stack*) malloc(sizeof(Stack));
    
    // menginisiasi nilai top pada np dengan NULL
    np -> top = NULL;
    
    // mengembalikan stack np
    return np;
}
