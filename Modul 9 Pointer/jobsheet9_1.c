#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "BORLAND"; // String lengkap
    int len = strlen(str);  // Panjang string
    char *ptr = str;        // Pointer menunjuk ke awal string

    // Loop untuk mencetak pola
    for (int i = len - 1; i >= 0; i--) {
        for (int j = i; j < len; j++) {
            printf("%c", *(ptr + j)); // Menggunakan pointer untuk mencetak karakter
        }
        printf("\n");
    }

    return 0;
}
