#include<stdio.h>

int main() {
    int ent, i = 1, n;
    scanf("%d", &ent);
    n = ent - (ent - 1);
    while (i <= ent) {
        if (n % 2 == 1)
            printf("%d\n", n);
        n++;
        i++;
    }

    return 0;
}