#include <stdio.h>
#include <string.h>

#define panjangmax 100 // Maksimal panjang kalimat

int main() {
    char kalimat[panjangmax]; // Array untuk menyimpan kalimat
    char kebalikan[panjangmax]; // Array untuk menyimpan kalimat yang dibalik
    int panjang, i;

    printf("Masukan Kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    // Menghapus newline yang mungkin ada di akhir input
    kalimat[strcspn(kalimat, "\n")] = '\0';
    panjang = strlen(kalimat); // Menghitung panjang kalimat

    // Membalikkan kalimat
    for (i = 0; i < panjang; i++) {
        kebalikan[i] = kalimat[panjang - 1 - i]; // Menyimpan karakter dari belakang ke depan
    }
    kebalikan[panjang] = '\0'; // Menambahkan null terminator di akhir string kebalikan

    // Menampilkan hasil
    printf("Kebalikannya: %s\n", kebalikan);

    return 0;
}