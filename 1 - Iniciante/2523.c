#include<stdio.h>

int main() {
    int num, i, pos[10000];
    char alfabeto[26];

    while (scanf("%s", alfabeto) != EOF) {
        scanf("%d", &num);
        i = 0;
        while (i < num) {
            scanf("%d", &pos[i]);
            i++;
        }
        for (i = 0; i < num; i++)
            printf("%c", alfabeto[(pos[i] - 1)]);
        printf("\n");
    }
}