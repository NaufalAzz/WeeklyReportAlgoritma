#include <stdio.h>

int main() {
    float celcius, kelvin, fahrenheit, reamur;

    printf("Input Suhu (Celcius): ");
    scanf("%f", &celcius);

    kelvin = celcius + 273.15;
    fahrenheit = (celcius * 1.8) + 32;
    reamur = celcius * 0.8;

    printf("Suhu dalam Kelvin = %.2f\n", kelvin);
    printf("Suhu dalam Fahrenheit = %.2f\n", fahrenheit);
    printf("Suhu dalam Reamur = %.2f\n", reamur);

    return 0;
}
