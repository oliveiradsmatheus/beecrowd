#include <stdio.h>

int main() {
    double MEDIA;
    float A, B;
    scanf("%f%f", &A, &B);
    MEDIA = (A * 3.5 + B * 7.5) / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}