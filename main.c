// Fungsi peminjaman buku
void peminjamanBuku() {
    char kode[20];
    char nama[50];
    char kelas[20];
    int ditemukan = 0;
    int jumlahPinjam;
    
    printf("\n--- Peminjaman Buku ---\n");
    
    // Input nama peminjam
    printf("Masukkan Nama Peminjam : ");
    scanf(" %[^\n]", nama);
    
    // Input kelas
    printf("Masukkan Kelas         : ");
    scanf(" %[^\n]", kelas);
    
    // Input kode buku
    printf("Masukkan Kode Buku     : ");
    scanf(" %[^\n]", kode);
    
    // Cari buku berdasarkan kode
    for (int i = 0; i < totalBuku; i++) {
        if (strcmp(perpustakaan[i].Kode, kode) == 0) {
            ditemukan = 1;
            
            printf("\n-- Buku Ditemukan --\n");
            printf("Judul Buku    : %s\n", perpustakaan[i].Judul);
            printf("Kode Buku     : %s\n", perpustakaan[i].Kode);
            
            if (perpustakaan[i].Jumlah > 0) {
                printf("\nMasukkan Jumlah yang Ingin Dipinjam : ");
                scanf("%d", &jumlahPinjam);
                
                // Validasi input
                if (jumlahPinjam <= 0) {
                    printf("\n-- Jumlah tidak valid! --\n");
                } else if (jumlahPinjam > perpustakaan[i].Jumlah) {
                    printf("\n-- Stok tidak mencukupi! --\n");
                    printf("Stok tersedia hanya %d buku\n", perpustakaan[i].Jumlah);
                } else {
                    // Simpan data peminjaman
                    strcpy(daftarPeminjaman[totalPeminjaman].NamaPeminjam, nama);
                    strcpy(daftarPeminjaman[totalPeminjaman].Kelas, kelas);
                    strcpy(daftarPeminjaman[totalPeminjaman].KodeBuku, kode);
                    strcpy(daftarPeminjaman[totalPeminjaman].JudulBuku, perpustakaan[i].Judul);
                    daftarPeminjaman[totalPeminjaman].JumlahPinjam = jumlahPinjam;
                    totalPeminjaman++;
                    
                    // Kurangi stok otomatis
                    perpustakaan[i].Jumlah -= jumlahPinjam;
                    
                    printf("\n-- Peminjaman Berhasil! --\n");
                    printf("Nama Peminjam : %s\n", nama);
                    printf("Kelas         : %s\n", kelas);
                    printf("Nama Buku     : %s\n", perpustakaan[i].Judul);
                    printf("Kode Buku     : %s\n", kode);
                    printf("Jumlah Pinjam : %d\n", jumlahPinjam);
                }
            }
            break;
        }
    }
    
    if (!ditemukan) {
        printf("\n-- Buku dengan kode '%s' tidak ditemukan --\n", kode);
    }
}
    