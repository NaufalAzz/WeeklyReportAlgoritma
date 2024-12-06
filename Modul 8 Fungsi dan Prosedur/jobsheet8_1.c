#include <stdio.h>

// Fungsi rekursif untuk mengalikan dua bilangan positif
int multiply(int a, int b) {
    // Kasus dasar: jika b adalah 0, hasilnya adalah 0
    if (b == 0) {
        return 0;
    }
    else if (b == 1) {
        return a;
    }
    else {
        return a + multiply(a, b - 1);
    }
}
void printExplanation(int a, int b) {
    printf("%d x %d = ", a, b);
    for (int i = 0; i < b; i++) {
        printf("%d", a);
        if (i < b - 1) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    int num1, num2, result;
    printf("Masukkan bilangan bulat positif pertama: ");
    scanf("%d", &num1);
    printf("Masukkan bilangan bulat positif kedua: ");
    scanf("%d", &num2);

    if (num1 < 0 || num2 < 0) {   // Memastikan kedua bilangan positif
        printf("Masukkan bilangan bulat positif.\n");   
        return 1;
    }

    // Menghitung hasil perkalian menggunakan fungsi rekursif
    result = multiply(num1, num2);
    printExplanation(num1, num2);
    printf("Hasil: %d\n", result);

    return 0;
}