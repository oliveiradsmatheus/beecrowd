#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main(void) {
    int R, Gas, RCubo;
    double V;

    scanf("%d %d", &R, &Gas);
    RCubo = pow(R,3);
    V = (4 * PI * RCubo) / 3;
    printf("%.0f\n", floor(Gas / V));
    return 0;
}