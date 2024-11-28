#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts;
    char playAgain;

    // Inisialisasi random number generator
    srand(time(0));

    do {
        // Komputer memilih nomor acak antara 1 dan 20
        number = rand() % 20 + 1;
        attempts = 0;

        printf("Saya telah memilih nomor antara 1 dan 20. Cobalah untuk menebak!\n");

        do {
            printf("Masukkan tebakan Anda: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < number) {
                printf("Nomor saya lebih besar!\n");
            } else if (guess > number) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, anda benar! Nomor saya adalah %d.\n", number);
                printf("Jumlah percobaan yang diperlukan: %d\n", attempts);
            }
        } while (guess != number);
        
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Terima kasih telah bermain!\n");
    return 0;
}