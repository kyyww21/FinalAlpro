#include <stdio.h>
#include <string.h>
//testing search engine
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
            strcpy(perpustakaan[0].Judul, "PAI");
            strcpy(perpustakaan[0].Kode, "10");
            perpustakaan[0].JumlahTotal = 365;
            perpustakaan[0].JumlahDipinjam = 250;

            strcpy(perpustakaan[1].Judul, "FISIKA");
            strcpy(perpustakaan[1].Kode, "20");
            perpustakaan[1].JumlahTotal = 365;
            perpustakaan[1].JumlahDipinjam = 100;
        totalBuku = 2;

        }
        void caribuku() {
        char kode[20]; 
        int ditemukan = 0;
            printf("\n--- PENCARIAN BUKU --\n");
            printf("Masukan kode buku : ");
            scanf(" %[^\n]", kode);
                for (int i = 0; i < totalBuku; i++) {
                if (strcmp(perpustakaan[i].Kode, kode) == 0) {
                printf("\n=============================\n");
                printf("   INFORMASI BUKU\n");
                printf("=============================\n");
                printf("Judul Buku        : %s\n", perpustakaan[i].Judul);
                printf("Kode Buku         : %s\n", perpustakaan[i].Kode);
                printf("Total Persediaan  : %d\n", perpustakaan[i].JumlahTotal);
                printf("Sedang Dipinjam   : %d\n", perpustakaan[i].JumlahDipinjam);
                int tersedia = perpustakaan[i].JumlahTotal - perpustakaan[i].JumlahDipinjam;
                printf("Tersedia          : %d\n", tersedia);
                printf("=============================\n");
                ditemukan = 1;
                break;
           } 
        }
            if (!ditemukan) {
                printf("\n[!] Buku dengan kode '%s' tidak ditemukan\n", kode);
        }
    }
                int main() {
                    char pilihan;
                    inisialisasiData();
                    printf("=====================================\n");
                    printf("  SEARCH ENGINE PERPUSTAKAAN\n");
                    printf("=====================================\n");
                do {
                caribuku();
                printf("\nCari lagi? (y/n) ; ");
                scanf(" %c", &pilihan);
            } while (pilihan == 'y' || pilihan == 'Y');
            printf("\nTerima kasih telah menggunakan sistem pencarian perpustakaan!\n");
        return 0;
    }
    


