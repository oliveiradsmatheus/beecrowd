#include<stdio.h>

#define tf 1000

int main() {
    int ent, i, num[tf], j;
    scanf("%d", &ent);
    for (i = 0, j = 0; i < tf; i++) {
        num[i] = j;
        printf("N[%d] = %d\n", i, num[i]);
        j++;
        if (j == ent)
            j = 0;
    }
}