#include <stdio.h>

int main() {
    int jumlah_mahasiswa, i;

    // Meminta input jumlah mahasiswa
    printf("Input banyak mahasiswa: ");
    scanf("%d", &jumlah_mahasiswa);

    // Mendeklarasikan array untuk menyimpan nama mahasiswa
    char nama_mahasiswa[jumlah_mahasiswa][100]; // Asumsi maksimal panjang nama adalah 99 karakter

    // Menginput nama mahasiswa
    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf(" %[^\n]", nama_mahasiswa[i]); // Menggunakan format ini untuk membaca string dengan spasi
    }

    // Menampilkan nama mahasiswa
    printf("\nNama mahasiswa:\n");
    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, nama_mahasiswa[i]);
    }

    return 0;
}