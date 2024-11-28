#include <stdio.h>

int main() {
    // Deklarasi variabel
    int pilihan;
    float saldo = 175000.0; // Saldo awal
    float setoran, penarikan;
    const float saldoMinimal = 50000.0; // Saldo minimal yang harus disisakan

    // Informasi Akun
    printf("No Rek: 0123\n");
    printf("Nama Akun: Hatori\n");
    printf("Saldo ATM: Rp. %.2f\n", saldo);
    
    do {
        // Menu ATM
        printf("\nATM\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: // Cek Saldo
                printf("Saldo Anda: Rp. %.2f\n", saldo);
                break;
            case 2: // Setoran
                printf("Masukkan jumlah setoran: Rp. ");
                scanf("%f", &setoran);
                saldo += setoran; // Tambahkan setoran ke saldo
                printf("Setoran berhasil. Saldo Anda sekarang: Rp. %.2f\n", saldo);
                break;
            case 3: // Penarikan Tunai
                printf("Masukkan jumlah penarikan: Rp. ");
                scanf("%f", &penarikan);
                if (saldo - penarikan < saldoMinimal) {
                    printf("Penarikan gagal. Saldo minimal yang harus disisakan adalah Rp. %.2f\n", saldoMinimal);
                } else {
                    saldo -= penarikan; // Kurangi saldo dengan jumlah penarikan
                    printf("Penarikan berhasil. Saldo Anda sekarang: Rp. %.2f\n", saldo);
                }
                break;
            case 4: // Exit
                printf("Terima kasih telah menggunakan ATM.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 4); // Ulangi hingga pengguna memilih untuk keluar

    return 0;
}