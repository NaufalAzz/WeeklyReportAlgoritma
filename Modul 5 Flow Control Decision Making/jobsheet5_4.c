#include <stdio.h>

int main() {
    float nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    char grade;
    const int bobot_kehadiran = 20, bobot_tugas = 20, bobot_uts = 25, bobot_uas = 35;

    printf("Masukkan nilai Kehadiran (0-100): ");
    scanf("%f", &nilai_kehadiran);
    printf("Masukkan nilai Tugas (0-100): ");
    scanf("%f", &nilai_tugas);
    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilai_uts);
    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilai_uas);

    nilai_akhir = (nilai_kehadiran * bobot_kehadiran / 100) +
                  (nilai_tugas * bobot_tugas / 100) +
                  (nilai_uts * bobot_uts / 100) +
                  (nilai_uas * bobot_uas / 100);

    if (nilai_akhir <= 44) {
        grade = 'E';
        printf("Grade: %c\n", grade);
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilai_akhir <= 55) {
        grade = 'D';
        printf("Grade: %c\n", grade);
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilai_akhir <= 65) {
        grade = 'C';
        printf("Grade: %c\n", grade);
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilai_akhir <= 75) {
        grade = 'B';
        printf("Grade: %c\n", grade);
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir <= 80) {
        grade = 'B';
        printf("Grade: %c\n", grade);
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir <= 85) {
        grade = 'B';
        printf("Grade: B+\n");
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir <= 90) {
        grade = 'A';
        printf("Grade: %c\n", grade);
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilai_akhir <= 100) {
        grade = 'A';
        printf("Grade: %c\n", grade);
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else {
        printf("Nilai akhir tidak valid.\n");
    }

    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    return 0;
}
