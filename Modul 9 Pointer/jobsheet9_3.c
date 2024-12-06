#include <stdio.h>

int main() {
    // Bagian A
    int Lesley = 57082;
    int Layla, Balmond;

    // Nilai Layla = Lesley
    Layla = Lesley;
    // Nilai Balmond = Layla + 1
    Balmond = Layla + 1;

    // Menampilkan hasil untuk Bagian A
    printf("Bagian A:\n");
    printf("a) Nilai Layla: %d\n", Layla);  // Nilai Layla
    printf("b) Nilai Balmond: %d\n", Balmond);  // Nilai Balmond

    // Bagian B
    int *LaylaPointer; // Pointer untuk Layla
    LaylaPointer = &Lesley;  // Layla menjadi alamat dari Lesley

    // Nilai Balmond = *Layla + 1
    Balmond = *LaylaPointer + 1;

    // Menampilkan hasil untuk Bagian B
    printf("\nBagian B:\n");
    printf("a) Nilai Layla: %d\n", *LaylaPointer);  // Nilai Layla (nilai yang ditunjuk oleh pointer)
    printf("b) Nilai Balmond: %d\n", Balmond);  // Nilai Balmond

    return 0;
}
