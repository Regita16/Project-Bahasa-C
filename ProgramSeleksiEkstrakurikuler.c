#include <stdio.h>

int main(){
    char nama[50];
    int nilai;
    int kehadiran;

    printf("===================================\n");
    printf("    SELEKSI EKSTRAKURIKULER FG     \n");
    printf("===================================\n");

    printf("\nMasukkan nama siswa: ");
    scanf(" %49[^\n]", nama);

    printf("Masukkan nilai tes (0-100):  ");
    scanf("%d", &nilai);

    printf("Masukkan kehadiran (0-100):  ");
    scanf("%d", &kehadiran);

    if (nilai < 0 || nilai > 100 ||
        kehadiran < 0 || kehadiran > 100) {
        printf("\nData Tidak Valid!");
        printf("Nilai dan kehadiran harus 0 hingga 100.\n");
    }
    else if (nilai >= 75 && kehadiran >= 80) {
        printf("\n================================\n");
        printf("          HASIL SELEKSI\n");
        printf("================================\n");

        printf("Nama Siswa : %s\n", nama);
        printf("Nilai Tes : %d\n", nilai);
        printf("Kehadiran : %d%%\n", kehadiran);
        printf("Status : LOLOS SELEKSI\n");
        printf("Selamat! Kamu memenuhi syarat ekstrakurikuler FG.\n");
    }
    else {
        printf("\n=======================================\n");
        printf("            HASIL SELEKSI\n");
        printf("=======================================\n");

        printf("Nama Siswa : %s\n", nama);
        printf("Nilai Tes : %d\n", nilai);
        printf("Kehadiran : %d%%\n", kehadiran);
        printf("Status : TIDAK LOLOS SELEKSI\n");

        if (nilai < 75) {
            printf("Alasan : Nilai tes belum mencapai 75.\n");
        }
        if (kehadiran < 80) {
            printf("Alasan : Kehadiran belum mencapai 80%%.\n");
        }
    }
    printf("==================================\n");
    printf("Program Seleksi Selesai.\n");

    return 0;
}