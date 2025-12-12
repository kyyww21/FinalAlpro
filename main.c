#include <stdio.h>
#include <string.h>
struct Buku
{
    char Judul[20];
    char Kode[20];
    int Jumlah;
};
struct Buku perpustakaan[100];
int totalBuku = 0;

void penambahanBuku() {
    if (totalBuku >= 100) {
        printf("Penyimpanan penuh!\n");
        return;
    }

    printf("\n--- Tambah Buku Baru ---\n");
    printf("Masukkan Judul Buku : ");
    // Menggunakan scanf dengan format khusus agar bisa membaca spasi
    scanf(" %[^\n]", perpustakaan[totalBuku].Judul);

    printf("Masukkan Kode Buku  : ");
    scanf(" %[^\n]", perpustakaan[totalBuku].Kode);
    
    printf("Masukkan Jumlah     : ");
    scanf(" %d", &perpustakaan[totalBuku].Jumlah);

    totalBuku++;
    printf("\n-- Buku berhasil ditambahkan --\n");
}

void bubbleSortBuku() {
    struct Buku temp;
    
    for (int i = 0; i < totalBuku - 1; i++) {
        for (int j = 0; j < totalBuku - i - 1; j++) {
            if (strcmp(perpustakaan[j].Judul, perpustakaan[j+1].Judul) > 0) {
                temp = perpustakaan[j];
                perpustakaan[j] = perpustakaan[j+1];
                perpustakaan[j+1] = temp;
            }
        }
    }
}