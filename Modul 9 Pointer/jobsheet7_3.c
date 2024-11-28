#include <stdio.h>
#include <string.h>

#define maksuser 3
#define panjangnama 50
#define panjangpassword 50

int main() {
    // Array untuk menyimpan username dan password
    char usernames[maksuser][panjangnama] = {"admin", "user1", "user2"};
    char passwords[maksuser][panjangpassword] = {"admin#123", "user1pass", "user2pass"};

    char inputUsername[panjangnama];
    char inputPassword[panjangpassword];
    int i, found = 0;

    // Meminta pengguna untuk memasukkan username
    printf("Masukkan username: ");
    scanf("%s", inputUsername);

    // Meminta pengguna untuk memasukkan password
    printf("Masukkan password: ");
    scanf("%s", inputPassword);

    // Memeriksa apakah username dan password benar
    for (i = 0; i < maksuser; i++) {
        if (strcmp(inputUsername, usernames[i]) == 0) {
            // Jika username cocok, periksa password
            if (strcmp(inputPassword, passwords[i]) == 0) {
                printf("Berhasil login\n");
                found = 1; // Menandakan bahwa login berhasil
                break;
            } else {
                printf("Password salah\n");
                found = 1; // Menandakan bahwa username ditemukan tetapi password salah
                break;
            }
        }
    }

    // Jika username tidak ditemukan
    if (!found) {
        printf("Username tidak ditemukan\n");
    }

    return 0;
}