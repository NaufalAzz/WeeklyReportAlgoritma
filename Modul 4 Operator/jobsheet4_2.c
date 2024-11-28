#include <stdio.h>

int main() {
    char nama_pembeli[50], nama_barang[50];
    float harga_satuan, total_harga;
    int jumlah_barang;

    printf("Masukkan nama pembeli: ");
    fgets(nama_pembeli, sizeof(nama_pembeli), stdin); 
    printf("Masukkan nama barang: ");
    fgets(nama_barang, sizeof(nama_barang), stdin);
    printf("Masukkan harga barang satuan: ");
    scanf("%f", &harga_satuan);
    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlah_barang);

    total_harga = harga_satuan * jumlah_barang;

    printf("\n===== Struk Pembelian =====\n");
    printf("Nama Pembeli   : %s", nama_pembeli);
    printf("Nama Barang    : %s", nama_barang);
    printf("Harga Satuan   : %.2f\n", harga_satuan);
    printf("Jumlah Barang  : %d\n", jumlah_barang);
    printf("Total Harga    : %.2f\n", total_harga);

    return 0;
}
