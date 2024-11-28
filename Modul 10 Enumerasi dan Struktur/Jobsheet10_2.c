#include <stdio.h>
#include <string.h>

// Definisikan struktur untuk zodiak
typedef struct {
    char nama[20];
    int mulai_hari, mulai_bulan;
    int akhir_hari, akhir_bulan;
} Zodiak;

int main() {
    // Deklarasi array struktur untuk menyimpan data zodiak
    Zodiak zodiak[] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}
    };

    int tanggal, bulan, tahun;
    char zodiak_anda[20] = "Tidak Diketahui";

    // Input tanggal lahir
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);

    // Cari zodiak berdasarkan tanggal dan bulan
    for (int i = 0; i < 12; i++) {
        if ((bulan == zodiak[i].mulai_bulan && tanggal >= zodiak[i].mulai_hari) ||
            (bulan == zodiak[i].akhir_bulan && tanggal <= zodiak[i].akhir_hari)) {
            strcpy(zodiak_anda, zodiak[i].nama);
            break;
        }
    }

    // Cetak hasil
    printf("Zodiak Anda adalah : %s\n", zodiak_anda);

    return 0;
}
