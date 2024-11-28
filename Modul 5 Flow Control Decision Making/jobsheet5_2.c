#include <stdio.h>

int main() {
    float total_pembelian, diskon, total_bayar;
    const float cashback = 5000;

    printf("Masukkan total pembelian: Rp ");
    scanf("%f", &total_pembelian);

    if (total_pembelian <= 75000) {
        diskon = 0.05 * total_pembelian;
    } else if (total_pembelian > 75000 && total_pembelian <= 125000) {
        diskon = 0.15 * total_pembelian;
    } else {
        diskon = 0.25 * total_pembelian + cashback;
    }

    total_bayar = total_pembelian - diskon;

    printf("\n===== STRUK PEMBELIAN =====\n");
    printf("Total Pembelian  : Rp %.2f\n", total_pembelian);
    printf("Diskon Diterima  : Rp %.2f\n", diskon);
    printf("Total Pembayaran : Rp %.2f\n", total_bayar);

    return 0;
}
