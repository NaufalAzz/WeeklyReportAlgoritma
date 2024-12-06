#include <stdio.h>

int main() {
    FILE *file;
    int jumlahMahasiswa, i;
    
    // Membuka file untuk menulis
    file = fopen("datamahasiswa.txt", "w");
    if (file == NULL) {
        printf("Error membuka file!\n");
        return 1;
    }

    // Input jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);
    getchar(); // Menghapus newline setelah input jumlah

    // Perulangan untuk input biodata mahasiswa
    for (i = 1; i <= jumlahMahasiswa; i++) {
        char nama[50], nim[20], jurusan[50], programStudi[50];

        printf("Masukan data mahasiswa ke-%d\n", i);
        printf("Nama: ");
        fgets(nama, sizeof(nama), stdin);
        printf("NIM: ");
        fgets(nim, sizeof(nim), stdin);
        printf("Jurusan: ");
        fgets(jurusan, sizeof(jurusan), stdin);
        printf("Program Studi: ");
        fgets(programStudi, sizeof(programStudi), stdin);

        // Menyimpan data ke dalam file
        fprintf(file, "Mahasiswa ke-%d\n", i);
        fprintf(file, "Nama: %s", nama);
        fprintf(file, "NIM: %s", nim);
        fprintf(file, "Jurusan: %s", jurusan);
        fprintf(file, "Program Studi: %s\n", programStudi);
    }

    // Menutup file
    fclose(file);
    printf("Data mahasiswa telah disimpan ke dalam file datamahasiswa.txt\n");

    return 0;
}