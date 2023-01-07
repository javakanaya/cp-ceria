/* 	
	Ditulis oleh:
	Nrp: 5025211112
	Nama: Java Kanaya Prada
*/
 
/* 
    Tanggal:
        Pembuatan: 		14 Maret 2022
        Modifikasi 1:   15 Maret 2022
*/

/*
	Program ini merupakan solusi dari masalah SPOJ 1840 - Print Queue
	Berikut adalah deskripsi masalah tersebut
	Satu-satunya printer di serikat mahasiswa ilmu komputer mengalami beban kerja yang sangat berat. 
	Terkadang ada seratus pekerjaan dalam antrian printer dan Anda mungkin harus menunggu berjam-jam 
	untuk mendapatkan satu halaman keluaran.

	Karena beberapa pekerjaan lebih penting daripada yang lain, 
	Hacker General telah menemukan dan menerapkan sistem prioritas sederhana 
	untuk antrian pekerjaan cetak. Sekarang, setiap pekerjaan diberi prioritas antara 1 dan 9 
	(dengan 9 sebagai prioritas tertinggi, dan 1 sebagai yang terendah), dan printer beroperasi sebagai berikut.

    - 	Pekerjaan pertama J dalam antrian diambil dari antrian.
    -	Jika ada beberapa pekerjaan dalam antrian dengan prioritas lebih tinggi dari pekerjaan J, 
		maka pindahkan J ke akhir antrian tanpa mencetaknya.
    -	Jika tidak, cetak pekerjaan J (dan jangan masukkan kembali ke dalam antrian).

	Dengan cara ini, semua resep muffin penting yang dicetak oleh Hacker General dapat dicetak dengan sangat cepat. 
	Tentu saja, makalah menjengkelkan yang dicetak orang lain mungkin harus menunggu cukup lama untuk dicetak, 
	tetapi itulah hidup.
	
	Program ini bertujuan untuk menhitung berapa lama sampai suatu pekerjaan akan dicetak, dengan asumsi
	bahwa setiap pekerjaan membutuhkan waktu 1 detik. 
	
	Dalam penyelesaian masalah, program ini menggunakan queue dan priority queue
	queue digunakan untuk menyimpan nilai prioritas dan indeks, sedangkan priority
	queue digunakan untuk menyimpan nilai prioritas. Karena pada priority queue
	nilai prioritas telah terurut dari prioritas terbesar ke terkecil,
	maka cara yang dilakukan adalah membandingkan nilai top/front pada queue dengan 
	priority queue, jika belum sama maka nilai queue akan diputar(yang front, di pindah ke back)
	jika telah sama maka akan di pop kan hingga mencapai posisi/index dari job yang dihitung.
	dalam setiap pop nilai detik bertambah satu.
*/

#include <stdio.h>
#include "printer.h"

int main(void)
{
	// deklarasi variabel T untuk jumlah Testcase/kasus
    int T;
    printf("----------SPOJ 1840 - Print Queue ----------\n\n");
    
    // mendapatkan jumlah kasus
	printf("Masukan jumlah kasus\n");
    scanf("%d", &T);
    
    // error handling dalam mendapatkan jumlah kasus
	while (T < 0)
    {
    	printf("jumlah kasus tidak boleh negatif:\n>");
    	scanf("%d", &T);
	}
	
	// prompting kepada user
    printf("\nPerhatikan sebelum input :\n");
    printf("- jumlah job dan posisi job dipisahkan oleh spasi\n");
    printf("- posisi job tidak boleh lebih besar dari jumlah job\n");
    printf("- posisi job dimulai dari 0, dan berakhir pada posisi ke jumlah job-1\n");
	printf("- prioritas job berada diantara 1 sampai 9\n");
	printf("- masing-masing prioritas job dipisahkan oleh spasi\n");	
    
    // loop untuk menjalankan program sebanyak jumlah kasus
    while(T > 0)
    {
    	// deklarasi variabel untuk jumlah job, dan posisi job yang akan di print
        int n, m;
        
		// mendapatkan jumlah job dan posisi job yang akan di print
		printf("\n------------------------------------------------------\n");
    	printf("\nmasukan jumlah job, dan posisi job yang akan di print\n>");
		scanf("%d %d", &n, &m);
		
		// error handling dalam mendapatakn jumlah dan posisi job
		while(m >= n)
		{
			// posisi job tidak boleh melebihi jumlah job
			printf("\nnilai yang dimasukkan TIDAK VALID\n>");
			scanf("%d %d", &n, &m);
		}
		
		// deklarasi Queue dan Priority Queue
        Queue byIndex;
        PriorityQueue byPriority;

		// inisiasi Queue dan Priority Queue
        queue_init(&byIndex);
        pqueue_init(&byPriority);

		// mendapatkan nilai prioritas untuk masing masing job
		printf("\nmasukkan prioritas masing-masing job yang akan di print\n>");
        for(int i = 0; i < n; i++)
        {
        	// deklarasi variabel ni untuk mendapatkan nilai prioritas
            int ni;
            scanf("%d", &ni);
            
            // memasukkan nilai ni sebagai nilai prioritas dan i sebagai indeks ke dalam queue
            queue_push(&byIndex, ni, i);
            
            // memasukkan hanya nilai ni ke dalam priority queue
            pqueue_push(&byPriority, ni);
        }
		
		// menampilkan hasil perhitungan dengan pemanggilan fungsi count_time()
		printf("\njob anda selesai dalam %d detik\n", count_time(&byPriority, &byIndex, m));
        
        // decrement pada variabel, menandakan bahwa satu kasus telah selesai di proses 
        T--;
    }
    return 0;
}
