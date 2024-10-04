#include<stdio.h>

int main(void) {
    long int num;
    scanf("%ld", &num);

    printf("%X\n", (unsigned)num);

    return 0;
}