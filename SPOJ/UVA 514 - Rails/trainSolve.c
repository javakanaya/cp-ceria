/*
	fungsi untuk memeriksa apakah urutan gerbong 
	kereta yang baru dapat dipakai atau tidak
*/

// pemanggilan user define header file
#include "rails.h"

int trainSolve(int arr[], // urutan  kereta yang diinginkan 
			   int g)	  // jumlah kereta
{
    // inisiasi nilai sp dengan 1, menandakan urutan kereta yang masuk dimulai dari 1
	int sp = 1;         
	
	// menginisasi stack stasiun
    Stack* stasiun = init();
    
    // loop sebanyak jumlah kereta
    for(int i = 0; i < g; i++)
    {
    	// jika stasiun kosong 
        if(isEmpty(stasiun) && sp <= g)
        {
        	// kereta yang datang dimasukan ke dalam stasiun
            push(stasiun, sp);
            sp++;
        }
        
        // jika kereta terdepan di stasiun bukan urutan kereta berangka yang dinginkan
        while(top(stasiun) != arr[i])
        {
        	// kereta yang datang dimasukkan ke dalam stasiun
            push(stasiun, sp);
            sp++;
            
            // jika jumlah kereta yang masuk stasiun lebih dari jumlah kereta 
            if(sp > g + 1)
            {
            	// maka urutan kereta yang diinginkan tidak mungkin dilakukan
                return 0;
			}
        }
        // kereta terdepan di stasiun berangkat, sesuai dengan urutan yang telah ditentukan
        pop(stasiun);
    }
    // jika mencapai sini maka, urutan kereta mungkin untuk dilakukan
    return 1;
}
