#include <stdio.h>

int main() {
    int pilihan;
    float bilangan1, bilangan2, hasil;

    // Menampilkan menu operasi
    printf("===== Menu Operasi Aritmatika =====\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Hasil Bagi (Modulus)\n");
    printf("Pilih operasi (1-5): ");
    scanf("%d", &pilihan);

    // Meminta input dua bilangan
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &bilangan1);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &bilangan2);3

    // Menghitung berdasarkan pilihan
    switch(pilihan) {
        case 1:
            hasil = bilangan1 + bilangan2;
            printf("Hasil Penjumlahan: %.2f\n", hasil);
            break;
        case 2:
            hasil = bilangan1 - bilangan2;
            printf("Hasil Pengurangan: %.2f\n", hasil);
            break;
        case 3:
            hasil = bilangan1 * bilangan2;
            printf("Hasil Perkalian: %.2f\n", hasil);
            break;
        case 4:
            if (bilangan2 != 0) {
                hasil = bilangan1 / bilangan2;
                printf("Hasil Pembagian: %.2f\n", hasil);
            } else {
                printf("Error: Pembagian dengan nol tidak diperbolehkan!\n");
            }
            break;
        case 5:
            if ((int)bilangan2 != 0) {
                int hasil_bagi = (int)bilangan1 % (int)bilangan2;
                printf("Hasil Bagi (Modulus): %d\n", hasil_bagi);
            } else {
                printf("Error: Pembagian dengan nol tidak diperbolehkan!\n");
            }
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }

    return 0;
}
