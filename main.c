#include <stdio.h>

void statusBuku(){
    #include <stdio.h>
    #include <string.h>

    struct Buku {
        char kode[20];
        char judul[50];
        
    struct Buku database[200];
    int totalBuku = 0;

    void tambahBuku() {
        printf("Daftar Buku:\n");

        if (totalBuku == 0) {
            printf("Tidak ada buku dalam database.\n");

            return;
        }

        for (int i = 0; i < jumlahBuku; i++) {
            printf("Kode: %s, Judul: %s, Kelas: %s, Mapel: %s\n",
                   database[i].kode,
                   database[i].judul
                   database[i].kelas,
                   database[i].mapel;
            );
        }
    }
    void tambahBuku(){
        printf(" \n=== Tambah Buku ===\n");
        printf("Masukkan kode buku: ");
        scanf("%s", database[jumlahBuku].kode);

        printf("Masukkan judul buku: ");
        scanf("%s", database[jumlahBuku].judul);

        printf("Masukkan kelas: ");
        scanf("%s", database[jumlahBuku].kelas);

        printf("Masukan mapel: ");
        scanf("%s", database[jumlahBuku].mapel);

        jumlahBuku++;
        printf("Buku berhasil ditambahkan!\n");


        

    }

    {
        /* data */
    };
    
}
int main(){
    statusBuku();
    return 0; 

}