
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
    
    