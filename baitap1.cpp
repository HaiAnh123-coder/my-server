#include <stdio.h>

int main() {
    float u, i;

    printf("Nhap dien ap U (V): ");
    scanf("%f", &u);

    printf("Nhap dong dien I (A): ");
    scanf("%f", &i);

    float p = u * i;
    printf("Cong suat P = %.2f W\n", p);

    return 0;
}