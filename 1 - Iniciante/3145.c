#include <stdio.h>

int main(void) {
    float a, b, res;

    scanf("%f %f", &a, &b);
    res = b / (a + 2);

    printf("%.2f\n", res);

    return 0;
}