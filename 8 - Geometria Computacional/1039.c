#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main(void) {
    int RaioC, RaioF, XC, XF, YC, YF;
    float Dist;

    while (scanf("%d %d %d %d %d %d", &RaioC, &XC, &YC, &RaioF, &XF, &YF) != EOF) {
        Dist = sqrt(pow(XC - XF, 2) + pow(YC - YF, 2));
        if (RaioC >= Dist + RaioF)
            printf("RICO\n");
        else
            printf("MORTO\n");
    }
    return 0;
}