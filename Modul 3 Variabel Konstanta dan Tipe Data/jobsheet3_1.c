#include <stdio.h>

int main() {
    float rupiah, dollar;
    const float ubah = 14250.0;  

    printf("Masukkan jumlah Rupiah (Rp): ");
    scanf("%f", &rupiah);

    dollar = rupiah / ubah;

    printf("Jumlah Dollar ($) yang diterima: %.2f\n", dollar);

    return 0;
}
