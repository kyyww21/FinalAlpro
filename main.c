#include <stdio.h>

void statusBuku(){
    #include <stdio.h>
    #include <string.h>

    struct Buku {
        char kode[20];
        char judul[50];
        char kelas[10];
        char mapel[20];
    };
    struct Buku database[200];
    int jumlahBuku = 0;

    void tampilBuku() {
        printf("Daftar Buku:\n");
        for (int i = 0; i < jumlahBuku; i++) {
            printf("Kode: %s, Judul: %s, Kelas: %s, Mapel: %s\n",
                   database[i].kode,
                   database[i].judul,
                   database[i].kelas,
                   database[i].mapel);
        }
    }
    
    {
        /* data */
    };
    
}
int main(){
    statusBuku();
    return 0; 

}