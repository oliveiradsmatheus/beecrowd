#include<stdio.h>

int main() {
    int num = 1, N, i = 1;
    scanf("%d", &N);
    while (i <= N) {
        printf("%d %d %d\n", num, num * num, num * num * num);
        num++;
        i++;
    }
    return 0;
}