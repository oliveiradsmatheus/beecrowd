#include <stdio.h>
#include <math.h>

int main() {
    float volume, diam, area, alt, raio;

    while (scanf("%f %f", &volume, &diam) != EOF) {
        raio = diam / 2;
        area = 3.14 * pow(raio, 2);
        alt = volume / area;
        printf("ALTURA = %.2f\n", alt);
        printf("AREA = %.2f\n", area);
    }
}