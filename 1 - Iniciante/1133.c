#include <stdio.h>

int main() {
    int n1, n2, i;
    scanf("%d%d", &n1, &n2);

    if (n1 > n2) {
        i = n2 + 1;
        while (i < n1) {
            if (i % 5 == 2 || i % 5 == 3)
                printf("%d\n", i);
            i++;
        }
    }
    if (n2 > n1) {
        i = n1 + 1;
        while (i < n2) {
            if (i % 5 == 2 || i % 5 == 3)
                printf("%d\n", i);
            i++;
        }
    }
    return 0;
}