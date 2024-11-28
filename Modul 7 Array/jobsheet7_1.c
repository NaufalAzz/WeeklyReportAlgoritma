#include <stdio.h>

int main() {
    int i;
    float nilai[20], total = 0.0, rata_rata;

    printf("Masukkan nilai dari 20 mahasiswa (1-100):\n");
    for (i = 0; i < 20; i++) {
        do {
            printf("Mahasiswa %d: ", i + 1);
            scanf("%f", &nilai[i]);

            // Memeriksa apakah nilai berada dalam rentang 1-100
            if (nilai[i] < 1 || nilai[i] > 100) {
                printf("Nilai tidak valid! Silakan masukkan nilai antara 1 dan 100.\n");
            }
        } while (nilai[i] < 1 || nilai[i] > 100); // 
        total += nilai[i];
    }

    // Menghitung rata-rata
    rata_rata = total / 20;

    // Menampilkan hasil
    printf("Rata-rata nilai dari 20 mahasiswa adalah: %.2f\n", rata_rata);

    return 0;
}