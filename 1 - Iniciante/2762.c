#include <stdio.h>

int main(void) {
    long long int num1, num2;
    scanf("%lld.%lld", &num1, &num2);
    printf("%lld.%lld\n", num2, num1);
}