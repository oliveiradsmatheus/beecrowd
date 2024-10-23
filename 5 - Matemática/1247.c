#include <stdio.h>
#include <math.h>

int main(void) {
    float dist, vf, vg, tempof, tempog;
    while (scanf("%f %f %f", &dist, &vf, &vg) != EOF) {
        tempof = 12 / vf;
        tempog = sqrt(144 + dist*dist) / vg;
        if (tempof < tempog)
            printf("N\n");
        else
            printf("S\n");
    }
    return 0;
}