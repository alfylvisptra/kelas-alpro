#include <stdio.h>

int main() {
    int gender;
    double berat, tinggi, bmi;

    printf("Jenis kelamin (Pria=1, Wanita=2): ");
    scanf("%d", &gender);

    printf("Masukkan berat (kg): ");
    scanf("%lf", &berat);

    printf("Masukkan tinggi (cm): ");
    scanf("%lf", &tinggi);

    if (gender == 1 || gender == 2) {
        // Formula BMI untuk pria atau wanita
        tinggi /= 100; // Convert height to meters
        bmi = berat / (tinggi * tinggi);

        printf("BMI anda adalah: %.2lf\n", bmi);

        if (bmi < 18.5) {
            printf("tidak ideal\n");
        } else if (bmi < 24.9) {
            printf("ideal\n");
        } else if (bmi < 29.9) {
            printf("tidak ideal\n");
        } else {
            printf("BMI tidak valid\n");
        }
    } else {
        printf("Jenis kelamin tidak valid.\n");
        return 1;
    }

    return 0;
}
