#include<stdio.h>

int main() {
    int por1, por2, por3, por4, por5, tot;
    scanf("%d%d%d%d%d", &por1, &por2, &por3, &por4, &por5);
    tot = por1 * 300 + por2 * 1500 + por3 * 600 + por4 * 1000 + por5 * 150 + 225;
    printf("%d\n", tot);
}