#include<stdio.h>

#define tf 10

int main() {
    int num[tf], i;
    scanf("%d", &num[0]);

    for (i = 0; i < tf; i++) {
        printf("N[%d] = %d\n", i, num[i]);
        num[i + 1] = num[i] * 2;
    }
}