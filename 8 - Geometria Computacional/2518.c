#include <stdio.h>
#include <math.h>

int main(void) {
    int degraus, h, c, l;
    double area, hip;

    while (scanf("%d", &degraus) != EOF) {
        scanf("%d %d %d", &h, &c, &l);
        hip = sqrt(c * c + h * h);
        area = l * hip * degraus;
        printf("%.4f\n", area/(10000));
    }
    return 0;
}