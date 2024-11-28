#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxmahasiswa 100

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    char npm[10];
    char nama[50];
    char tgl_lahir[11]; // Format: dd-mm-yyyy
    char alamat[100];
    char hp[15];
};

// Fungsi untuk menampilkan data mahasiswa
void tampilkanDataMahasiswa(struct Mahasiswa mhs[], int jumlah) {
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < jumlah; i++) {
        printf("%s %s %s %s %s\n", mhs[i].npm, mhs[i].nama, mhs[i].tgl_lahir, mhs[i].alamat, mhs[i].hp);
    }
}

int main() {
    struct Mahasiswa mhs[maxmahasiswa];
    int jumlahMahasiswa = 0;
    char tambahData;

    do {
        // Memasukkan data mahasiswa
        printf("Masukkan NPM: ");
        scanf("%s", mhs[jumlahMahasiswa].npm);
        printf("Masukkan Nama: ");
        scanf(" %[^\n]", mhs[jumlahMahasiswa].nama); // Membaca string dengan spasi
        printf("Masukkan Tanggal Lahir (dd-mm-yyyy): ");
        scanf("%s", mhs[jumlahMahasiswa].tgl_lahir);
        printf("Masukkan Alamat: ");
        scanf(" %[^\n]", mhs[jumlahMahasiswa].alamat);
        printf("Masukkan No HP: ");
        scanf("%s", mhs[jumlahMahasiswa].hp);

        jumlahMahasiswa++;

        // Menanyakan apakah ingin memasukkan data lagi
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &tambahData);

    } while (tambahData == 'y' || tambahData == 'Y');

    // Menampilkan semua data mahasiswa
    tampilkanDataMahasiswa(mhs, jumlahMahasiswa);

    return 0;
}