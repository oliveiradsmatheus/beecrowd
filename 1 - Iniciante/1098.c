#include<stdio.h>

int main() {
    float i = 0;
    int j = 1;
    while (i <= 2.2) {
        if (i == 0 || i == 1 || i >= 2) {
            printf("I=%d J=%d\n", (int) i, j + (int) i);
            printf("I=%d J=%d\n", (int) i, j + 1 + (int) i);
            printf("I=%d J=%d\n", (int) i, j + 2 + (int) i);
        } else if ((i > 0 && i < 1) || (i > 1 && i < 2)) {
            printf("I=%.1f J=%.1f\n", i, j + i);
            printf("I=%.1f J=%.1f\n", i, j + 1 + i);
            printf("I=%.1f J=%.1f\n", i, j + 2 + i);
        }
        i += 0.2;
    }
    return 0;
}