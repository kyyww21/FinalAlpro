#include <stdio.h>
#include <string.h>

int totalBuku = 0;

struct Buku {
    char Judul[100];
    char Kode[20];
    int JumlahTotal;
    int JumlahDipinjam;
};

struct Buku perpustakaan[100];

void statusBuku() {

    if (totalBuku == 0) {
        printf("\n-- Belum ada buku yang tersimpan --\n");
        return;
    }

    printf("\n=========== STATUS SEMUA BUKU ===========\n");
    printf("%-30s %-10s %-8s %-10s %-10s %-15s\n",
           "Judul", "Kode", "Total", "Dipinjam", "Tersedia", "Status");
    printf("-----------------------------------------------------------------------------\n");

    for (int i = 0; i < totalBuku; i++) {

        int tersedia = perpustakaan[i].JumlahTotal
                     - perpustakaan[i].JumlahDipinjam;

        char status[20];

        if (tersedia > 0)
            strcpy(status, "Tersedia");
        else
            strcpy(status, "Habis");

        printf("%-30s %-10s %-8d %-10d %-10d %-15s\n",
               perpustakaan[i].Judul,
               perpustakaan[i].Kode,
               perpustakaan[i].JumlahTotal,
               perpustakaan[i].JumlahDipinjam,
                tersedia,
               status);
    }
}
