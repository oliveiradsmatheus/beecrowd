#include<stdio.h>

int main() {
    int ent, i = 1;
    scanf("%d", &ent);
    if (ent % 2 == 0)
        ent++;
    else
        ent = ent;
    while (i <= 6) {
        printf("%d\n", ent);
        ent += 2;
        i++;
    }
}