#include<stdio.h>

#define tf 100

int main() {
    int i;
    double num[tf];
    scanf("%lf", &num[0]);
    printf("N[%d] = %.4lf\n", 0, num[0]);
    for (i = 1; i < tf; i++) {
        num[i] = num[i - 1] / 2;
        printf("N[%d] = %.4lf\n", i, num[i]);
    }

}