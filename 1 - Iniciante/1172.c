#include<stdio.h>

#define tf 10

int main() {
    int num[tf], i;
    for (i = 0; i < tf; i++) {
        scanf("%d", &num[i]);
        if (num[i] <= 0)
            num[i] = 1;
        printf("X[%d] = %d\n", i, num[i]);
    }
}