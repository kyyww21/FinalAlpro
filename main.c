#include <stdio.h>

void menu();

void selesai() {
    printf("Oke, Terimakasih ;)");
}

void selesaiPerubahan() {
    printf("Perubahan Telah Disimpan, Terimakasih ;)\n");
}

void subMenu1() {
    int subOpsi1;
    printf("\n===OPSI===\n1. Penambahan Buku\n2. Penghapusan Buku\n3. Status Buku\n4. Daftar Buku\n5. Kembali\n6. Selesai\nMasukkan Opsi Anda : ");
    scanf("%d", &subOpsi1);

        switch(subOpsi1) {
            case 1:
                selesaiPerubahan();
                subMenu1();
                break;
            case 2:
                selesaiPerubahan();
                subMenu1();
                break;
            case 3:
                selesaiPerubahan();
                subMenu1();
                break;
            case 4:
                selesaiPerubahan();
                subMenu1();
                break;
            case 5:
                menu();
                break;
            case 6:
                selesai();
                break;
            default:
                printf("\nTidak ada Opsi %d di dalam daftar Opsi, Silahkan Pilih Kembali");
                subMenu1();
                break;
        }
}

void subMenu2() {
    int subOpsi2;
    printf("\n===OPSI===\n1. Peminjaman Buku2. Pengembalian Buku\n3. Kembali\n4. Selesai\nMasukkan Opsi Anda : ");
    scanf("%d", &subOpsi2);

        switch(subOpsi2) {
            case 1:
                selesaiPerubahan();
                subMenu2();
                break;
            case 2:
                selesaiPerubahan();
                subMenu2();
                break;
            case 3:
                menu();
                break;
            case 4:
                selesai();
                break;
            default:
                printf("\nTidak ada Opsi %d di dalam daftar Opsi, Silahkan Pilih Kembali");
                subMenu2();
                break;
        }
}

void menu() {
    int opsi;

    printf("\n===OPSI===\n1. Operator\n2. Pengunjung\n3. Selesai\nMasukkan Opsi Anda : ");
    scanf("%d", &opsi);

    switch(opsi) {
        case 1:
            subMenu1();
            break;
        case 2:
            subMenu2();
            break;
        case 3:
            selesai();
            break;
        default:
            printf("\nTidak ada Opsi %d di dalam daftar Opsi, Silahkan Pilih Kembali");
            subMenu1();
            break;
    }
}

int main(){
    menu();
}