#include <stdio.h>
#include <string.h>

struct Buku
{
    char Judul[50];
    char Kode[20];
    int JumlahTotal;
    int JumlahDipinjam;
};
struct Buku perpustakaan[100];
int totalBuku = 0;

void inisialisasiData() {
    // Data contoh
    strcpy(perpustakaan[0].Judul, "Bobo");
    strcpy(perpustakaan[0].Kode, "10");
    perpustakaan[0].JumlahTotal = 1000;
    perpustakaan[0].JumlahDipinjam = 250;
    
    strcpy(perpustakaan[1].Judul, "Harry Potter");
    strcpy(perpustakaan[1].Kode, "20");
    perpustakaan[1].JumlahTotal = 500;
    perpustakaan[1].JumlahDipinjam = 100;
    
    strcpy(perpustakaan[2].Judul, "Laskar Pelangi");
    strcpy(perpustakaan[2].Kode, "30");
    perpustakaan[2].JumlahTotal = 300;
    perpustakaan[2].JumlahDipinjam = 50;
    
    totalBuku = 3;
}
