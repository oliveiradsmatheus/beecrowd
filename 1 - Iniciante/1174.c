#include <stdio.h>

#define tf 100

int main() {
    int i;
    float num[tf];
    for (i = 0; i < tf; i++) {
        scanf("%f", &num[i]);
        if (num[i] <= 10)
            printf("A[%d] = %.1f\n", i, num[i]);
    }
}