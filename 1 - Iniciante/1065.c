#include <stdio.h>

int main() {
    int i = 1, par = 0, num;
    while (i <= 5) {
        scanf("%d", &num);
        if (num % 2 == 0)
            par++;
        i++;
    }
    printf("%d valores pares\n", par);
}