#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(void) {
    int a, b, c;
    double P, AreaT, Rmenor, Rmaior, Girassois, Violetas, Rosas;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        P = (double) (a + b + c) / 2;
        AreaT = sqrt(P * (P - a) * (P - b) * (P - c));
        Rmenor = 2 * AreaT / (a + b + c);
        Rosas = PI * Rmenor * Rmenor;
        Violetas = AreaT - Rosas;
        Rmaior = ((a * b * c) / AreaT) / 4;
        Girassois = (PI * Rmaior * Rmaior) - AreaT;
        printf("%.4lf %.4lf %.4lf\n", Girassois, Violetas, Rosas);
    }
    return 0;
}