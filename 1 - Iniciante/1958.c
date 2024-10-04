#include <stdio.h>

int main(void) {
    double num;

    scanf("%lf", &num);

    printf("%+.4E\n", num);

    return 0;
}