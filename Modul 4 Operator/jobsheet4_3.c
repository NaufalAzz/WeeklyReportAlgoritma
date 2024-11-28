#include <stdio.h>

int main()
{
    // Deklarasi variabel nilai dan bobot
    float nilai_presensi = 85,
        nilai_praktek = 65, 
        nilai_uts = 80, 
        nilai_uas = 75;
    float bobot_presensi = 0.10, 
        bobot_praktek = 0.20, 
        bobot_uts = 0.30, 
        bobot_uas = 0.40;
    float nilai_akhir;

    // Menghitung nilai akhir
    nilai_akhir = (nilai_presensi * bobot_presensi) +
                  (nilai_praktek * bobot_praktek) +
                  (nilai_uts * bobot_uts) +
                  (nilai_uas * bobot_uas);

    // Menampilkan hasil nilai akhir
    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    return 0;
}
