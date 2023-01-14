/* 	
	Ditulis oleh:
	Nrp: 5025211112
	Nama: Java Kanaya Prada
*/
 
/* 
    Tanggal:
        Pembuatan: 		3 Maret 2022
        Modifikasi 1:   4 Maret 2022
*/

/*
	Program ini adalah solusi dari UVA 514 - Rails, berikut adalah penjelasan
	permasalahannya Terdapat stasiun KA dan dua jalur yaitu, jalur datang dan jalur pergi 
	Kereta pada jalur datang selalu terurut dan kereta pada jalur pergi sesuai kebutuhan
	atau input yang dimasukan oleh user, periksa kemungkinan terjadinya jalur pergi
	tampilkan ya jika jalur pergi mungking untuk dilakukan dan tidak jika jalur pergi
	tidak mungkin untuk dilakukan
*/

// pemanggilan standard header file
#include <stdio.h>

// pemanggilan user defined header file
#include "rails.h"

int main(void)
{
	// deklarasi variabel
    int g, 				// input - jumlah kereta  
        train[1001];	// input - urutan kereta yang diinginkan
    
	// prompting
	printf("----------UVA 514 - Rails----------\n");
    
    // mendapatkan jumlah kereta yang tidak bernilai negatif
    printf("\nmasukan jumlah kereta (0 untuk keluar)\n");
    do
	{
		printf("jumlah kereta tidak boleh negatif\n>");
		scanf("%d", &g);	
	}
	while (g < 0);	
	
	// loop untuk terus menjalankan program sampai user memasukan nilai 0 untuk jumlah kereta
    while(g != 0)
    {
    	// mendapatkan urutan kereta yang diinginkan
		printf("\nmasukan urutan kereta yang diinginkan (0 untuk mengganti jumlah atau keluar)\n");
		printf("urutan kereta dipisahkan oleh spasi dan di antara 1 sampai dengan %d serta tidak boleh muncul lebih dari sekali\n>", g);
		scanf("%d", &train[0]);
		
		// loop untuk terus mendapatkan nilai sampai user memasukan nilai 0 untuk urutan pertama kereta
        while(train[0] != 0)
    	{
    		// loop untuk mendapatkan urutan kereta sesuai jumlah yang diinginkan
            for(int i = 1; i < g; i++)
            {
				scanf("%d", &train[i]);
            }
            
            // memanggil fungsi trainSolve untuk menentukan apakah urutan kereta dapat dilakukan atau tidak
            if(trainSolve(train, g))
                printf("BISA\n");
            else
                printf("TIDAK BISA\n");
            
            // mendapatkan kembali urutan kereta yang diinginkan untuk kasus berikutnya
            printf("\nmasukan urutan kereta yang diinginkan (0 untuk mengganti jumlah atau keluar)\n");
            printf("urutan kereta dipisahkan oleh spasi dan di antara 1 sampai dengan %d serta tidak boleh muncul lebih dari sekali\n>", g);
            scanf("%d", &train[0]);
        }

		// mendapatkan kembali jumlah kereta untuk kasus berikutnya
        printf("\nmasukan jumlah kereta (0 untuk keluar)\n");
	    do
	    {
			printf("jumlah kereta tidak boleh negatif\n>");
			scanf("%d", &g);	
		}
	    while (g < 0);	
    }
    
    // menandakan bahwa program telah selesai dijalankan
	printf("\nProgram selesai di jalankan\n");
	return 0;
}


