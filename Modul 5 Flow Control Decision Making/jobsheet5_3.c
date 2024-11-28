#include <stdio.h>
#include <math.h> 
int main() {
    int pilihan;
    float luas;
    printf("===== Pilih Rumus Luas Permukaan =====\n");
    printf("1. Luas Permukaan Bola\n");
    printf("2. Luas Permukaan Kubus\n");
    printf("3. Luas Permukaan Balok\n");
    printf("4. Luas Permukaan Tabung\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1: {
            float jari_jari;
            printf("Masukkan jari-jari bola: ");
            scanf("%f", &jari_jari);
            luas = 4 * M_PI * jari_jari * jari_jari;
            printf("Luas Permukaan Bola: %.2f\n", luas);
            break;
        }
        case 2: {
            float sisi;
            printf("Masukkan panjang sisi kubus: ");
            scanf("%f", &sisi);
            luas = 6 * sisi * sisi;
            printf("Luas Permukaan Kubus: %.2f\n", luas);
            break;
        }
        case 3: {
            float panjang, lebar, tinggi;
            printf("Masukkan panjang balok: ");
            scanf("%f", &panjang);
            printf("Masukkan lebar balok: ");
            scanf("%f", &lebar);
            printf("Masukkan tinggi balok: ");
            scanf("%f", &tinggi);
            luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
            printf("Luas Permukaan Balok: %.2f\n", luas);
            break;
        }
        case 4: {
            float jari_jari, tinggi;
            printf("Masukkan jari-jari tabung: ");
            scanf("%f", &jari_jari);
            printf("Masukkan tinggi tabung: ");
            scanf("%f", &tinggi);
            luas = 2 * M_PI * jari_jari * (jari_jari + tinggi);
            printf("Luas Permukaan Tabung: %.2f\n", luas);
            break;
        }
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }

    return 0;
}
