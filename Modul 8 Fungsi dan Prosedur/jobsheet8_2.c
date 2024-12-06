#include <stdio.h>

// Fungsi untuk penjumlahan
double tambah(double a, double b) {
    return a + b;
}

// Fungsi untuk pengurangan
double kurang(double a, double b) {
    return a - b;
}

// Fungsi untuk perkalian
double kali(double a, double b) {
    return a * b;
}

// Fungsi untuk pembagian
double bagi(double a, double b) {
    if (b == 0) {
        printf("Error: Pembagian dengan nol tidak diperbolehkan!\n");
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2, hasil;
    char operator;

    printf("=== Kalkulator Sederhana ===\n");
    printf("Masukkan operasi (+,-,*,/): ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            hasil = tambah(num1, num2);
            printf("Hasil: %.2lf\n", hasil);
            break;
        case '-':
            hasil = kurang(num1, num2);
            printf("Hasil: %.2lf\n", hasil);
            break;
        case '*':
            hasil = kali(num1, num2);
            printf("Hasil: %.2lf\n", hasil);
            break;
        case '/':
            hasil = bagi(num1, num2);
            if (num2 != 0) {
                printf("Hasil: %.2lf\n", hasil);
            }
            break;
        default:
            printf("Error: Operator tidak valid!\n");
    }

    return 0;
}
