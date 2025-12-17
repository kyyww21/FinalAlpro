void daftarBuku() {
    if (totalBuku == 0) {
        printf("\n-- Belum ada buku di perpustakaan --\n");
    }
    
    printf("\n=== DAFTAR SEMUA BUKU ===\n");
    printf("%-30s %-15s %-8s %-10s %-10s\n", "Judul", "Kode", "Total", "Dipinjam", "Tersedia");  // Printf -> printf
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < totalBuku; i++) {
        int tersedia = perpustakaan[i].JumlahTotal - perpustakaan[i].JumlahDipinjam;  // Perpustakaan -> perpustakaan, tambah ;
        printf("%-30s %-15s %-8d %-10d %-10d\n",  // Tambah tanda kutip "
               perpustakaan[i].Judul,              // Perpustakaan -> perpustakaan
               perpustakaan[i].Kode,               // Perpustakaan -> perpustakaan
               perpustakaan[i].JumlahTotal,        // Perpustakaan -> perpustakaan
               perpustakaan[i].JumlahDipinjam,     // daftarPeminjaman -> perpustakaan
               tersedia);
    }
    printf("===============================================================\n");
}