#include <stdio.h>

void selesai() {
    printf("Oke, Terimakasih ;)");
}

void selesaiPerubahan() {
    printf("Perubahan Telah Disimpan, Terimakasih ;)\n");
}

void menu() {
    int opsi, subOpsi1, subOpsi2;

    printf("\n===OPSI===\n1. Operator\n2. Pengunjung\n3. Selesai\nMasukkan Opsi Anda : ");
    scanf("%d", &opsi);

    switch(opsi) {
        case 1:
            void subMenu() {
                printf("\n===OPSI===\n1. Penambahan Buku2. Penghapusan Buku\n3. Status Buku\n4. Daftar Buku\n5. Kembali\n6. Selesai\nMasukkan Opsi Anda : ");
                scanf("%d", &subOpsi1);

                switch(subOpsi1) {
                    case 1:
                        selesaiPerubahan();
                        menu();
                        break;
                    case 2:
                        selesaiPerubahan();
                        menu();
                        break;
                    case 3:
                        selesaiPerubahan();
                        menu();
                        break;
                    case 4:
                        selesaiPerubahan();
                        menu();
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
            subMenu1();
            break;
        case 2:
            void subMenu2() {
                printf("\n===OPSI===\n1. Peminjaman Buku2. Pengembalian Buku\n3. Kembali\n4. Selesai\nMasukkan Opsi Anda : ");
                scanf("%d", &subOpsi2);

                switch(subOpsi2) {
                    case 1:
                        selesaiPerubahan();
                        menu();
                        break;
                    case 2:
                        selesaiPerubahan();
                        menu();
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
            subMenu2();
            break;
        case 3:
            selesai();
            break
        default:
            printf("\nTidak ada Opsi %d di dalam daftar Opsi, Silahkan Pilih Kembali");
            subMenu1();
            break;
    }
    return;
}

int main(){
    menu();
}