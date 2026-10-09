#include <stdio.h>
// Memanggil library stdio.h.
// Library ini digunakan untuk fungsi input dan output,
// seperti printf() dan scanf().
// printf() digunakan untuk menampilkan output ke layar,
// scanf() digunakan untuk membaca input dari pengguna.

int main() {
    // Fungsi utama program.
    // Program C mulai dijalankan dari fungsi main().

    // ===========
    // 1. Deklarasi Variabel
    // ===========

    char nama[50];
    // Membuat variabel nama bertipe char /Tipe data untuk menyimpan satu karakter
    // [50] berati dapat menyimpan hingga 49 karakter
    // ditambah 1 karakter khusus untuk menandai akhir teks.

    char buku[100];
    // Membuat variabel buku bertipe char
    // Variabel ini digunakan untuk menyimpan judul buku
    // [100] berati dapat menyimpan hingga 99 karakter.

    int jumlahBuku;
    // Membuat variabel jumlahBuku bertipe int / Tipe data untuk menyimpan bilangan bulat
    // Variabel ini digunakan untuk menyimpan jumlah buku yang dipinjam

    int lamaPeminjaman;
    // Membuat variabel lamaPeminjaman bertipe int
    // Variabel ini digunakan untuk menyimpan lama peminjaman buku dalam hari.

    // ===========
    // 2. Menampilkan Judul Program
    // ===========

    printf("====================================\n");
    // Menampilkan garis pembatas pada layar
    // \n digunakan untuk membuat baris baru.

    printf("   PEMINJAMAN BUKU PERPUSTAKAAN  \n");
    // Menampilkan judul program

    printf("====================================\n");
    // Menampilkan garis pembatas bagian bawah

    // ===========
    // 3. Input Nama Peminjam
    // ===========

    printf("Masukkan Nama Peminjam: ");
    // Menampilkjan pesan agar pengguna memasukkan nama peminjam

    scanf(" %[^\n]", nama);
    // Membaca hasil inputan nama
    // %[^\n] digunakan agar input memiliki spasi

    // ===========
    // 4. Input Judul Buku
    // ===========

    printf("Masukkan Judul Buku: ");
    // Menampilkan pesan agar pengguna memasukkan judul buku

    scanf(" %[^\n]", buku);
    // Membaca hasil inputan judul buku

    // ===========
    // 5. Input Jumlah Buku
    // ===========

    printf("Masukkan Jumlah Buku  : ");
    // Menampilkan pesan agar pengguna memasukkan jumlah buku
    
    scanf("%d", &jumlahBuku);
    // Membaca hasil inputan jumlah buku
    // %d digunakan untuk membaca data tipe int

    // ===========
    // 6. Input Lama Peminjaman
    // ===========

    printf("Masukkan Lama Peminjaman (hari) : ");
    // Menampilkan pesan agar pengguna memasukkan lama peminjaman dalam satuan hari

    scanf("%d", &lamaPeminjaman);

    // 7. Menampilkan Hasil Peminjaman
    printf("\n");
    printf("====================================\n");
    printf("           Data Peminjaman          \n");
    printf("====================================\n");

    // 8. Menampilkan Nama Peminjam
    printf("Nama Peminjam    : %s\n", nama);

    // 9. Menampilkan Judul Buku
    printf("Judul Buku       : %s\n", buku);

    // 10. Menampilkan Jumlah Buku
    printf("Jumlah Buku      : %d\n", jumlahBuku);

    // 11. Menampilkan Lama Peminjaman
    printf("Lama Peminjaman  : %d hari\n", lamaPeminjaman);

    // 12. Pesan Akhir
    printf("====================================\n");
    printf("      Data berhasil disimpan!       \n");
    printf("====================================\n");

    // 13. Menghakhiri Program
    return 0;
    // Mengakhiri program dengan nilai 0 untuk menunjukkan bahwa program selesai tanpa error.
}