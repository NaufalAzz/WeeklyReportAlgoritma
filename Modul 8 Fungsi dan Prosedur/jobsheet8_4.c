#include <stdio.h>

// Fungsi untuk menghitung besar potongan
float potong(float totalPembelian) {
    if (totalPembelian < 1000000) {
        return 0; // Tidak ada diskon
    } else if (totalPembelian >= 1000000 && totalPembelian < 3000000) {
        return totalPembelian * 0.20; // Diskon 20% jika diatas 1jt
    } else {
        return totalPembelian * 0.35; // Diskon 35% jika diatas 3jt
    }
}

int main() {
    float totalPembelian, besarDiskon, totalBayar;

    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &totalPembelian);

    besarDiskon = potong(totalPembelian);        // Menghitung besar diskon menggunakan fungsi potong

    totalBayar = totalPembelian - besarDiskon;  // Menghitung total yang harus dibayarkan

    printf("Besar Diskon : Rp. %.2f\n", besarDiskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", totalBayar);

    return 0;
}