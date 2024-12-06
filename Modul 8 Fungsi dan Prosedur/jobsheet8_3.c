#include <stdio.h>
#define PI 3.14159 //nilai PI

// Fungsi untuk menghitung luas lingkaran, luas = π * r^2
float luas(float jariJari) {
    return PI * jariJari * jariJari;
}

// Fungsi untuk menghitung keliling lingkaran, keliling = 2 * π * r
float keliling(float jariJari) {
    return 2 * PI * jariJari;
}

int main() {
    float jariJari;

    // Meminta pengguna untuk memasukkan jari-jari lingkaran
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    // Memastikan jari-jari positif
    if (jariJari < 0) {
        printf("Jari-jari tidak boleh negatif.\n");
        return 1; // Keluar dari program jika input tidak valid
    }

    // Menghitung luas dan keliling menggunakan fungsi
    float luasLingkaran = luas(jariJari);
    float kelilingLingkaran = keliling(jariJari);

    printf("Luas lingkaran: %.2f\n", luasLingkaran);
    printf("Keliling lingkaran: %.2f\n", kelilingLingkaran);

    return 0;
}