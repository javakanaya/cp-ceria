/*
	fungsi untuk menghitung waktu yang dibutuhkan hingga job 
	telah selesai
*/
#include "printer.h"

int count_time(PriorityQueue *pq, Queue *q, int m)
{
	// menginisiasi nilai detik dengan 1
    int time = 1;
    
    // loop sampai queue atau priority queue kosong
    while(!queue_isEmpty(q) || !pqueue_isEmpty(pq))
    {
    	/*
    		jika nilai indeks pada front queue sesuai dengan yang diinginkan
    		dan nilai prioritas pada top/front queue maupun priority queue telah sama
    		maka akan mengembalikan nilai time, dan loop akan berhenti
		*/ 
        if(queue_front_index(q) == m && queue_front(q) == pqueue_top(pq))
        {
			return time;
            break;
        }
        
        /*
    		jika nilai indeks pada front queue lebih kecil 
    		dari pada nilai top pada priority queue
    		maka nilai pada queue akan diputar
    		nilai yang ada di front queue akan di pindah ke belakang
    		contoh :
    		
    		- - - - - - *
    					^
    					
    		* - - - - - -
    		^
    		
    		- * - - - - -
    		  ^
    		  
    		- - * - - - -
    		  	^
    		  	
    		dst..
    		  
    		catatan: perpindahan/perputaraan hanya dilakukan sekali dalam masing-masing perulangan,
    		ilustrasi diatas hanya sebagai contoh
		*/ 
        if(queue_front(q) < pqueue_top(pq))
        {
            queue_push(q, queue_front(q), queue_front_index(q));
            queue_pop(q);
        }
        
        /*
    		jika nilai indeks pada front queue dan top priority queue telah sesuai
    		tetapi indeks nya belum sama seperti yang diinginkan maka queue dan priority queue akan
    		di pop kan, dan nilai time akan di increment atau di tambah dengan 1
		*/
        else
        {
            time++;
            queue_pop(q);
            pqueue_pop(pq);
        }
    }
}
