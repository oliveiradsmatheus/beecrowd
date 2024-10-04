#include<stdio.h>

int main() {
    int ent, i, c1, c2;
    scanf("%d", &ent);
    for (i = 1; i <= ent; i++) {
        scanf("%d%d", &c1, &c2);
        printf("%d\n", c1 + c2);
    }
}