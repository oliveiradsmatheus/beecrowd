#include<stdio.h>

int main() {
    int xp, aumxp, novoxp;
    scanf("%d%d", &aumxp, &xp);
    while (xp != 0 || aumxp != 0) {
        novoxp = aumxp * xp;
        printf("%d\n", novoxp);
        scanf("%d%d", &aumxp, &xp);
    }
}