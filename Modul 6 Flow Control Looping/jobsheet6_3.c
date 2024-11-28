#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // jumlah baris yang diinginkan

    // Loop untuk setiap baris
    for (i = 1; i <= rows; i++) {
        // Loop untuk mencetak angka pada setiap baris
        for (j = 1; j <= i; j++) {
            printf("%d ", i * j); // mencetak hasil perkalian i dan j
        }
        // Pindah ke baris berikutnya
        printf("\n");
    }

    return 0;
}