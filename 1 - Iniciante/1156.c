#include <stdio.h>

int main() {
    double s = 0, i, j = 1;
    for (i = 1; i <= 39; i += 2) {
        s += i / j;
        j *= 2;
    }
    printf("%.2f\n", s);
    return 0;
}