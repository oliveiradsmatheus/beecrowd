#include<stdio.h>

int main() {
    int qt, i, num;
    scanf("%d", &qt);
    for (i = 0; i < qt; i++) {
        scanf("%d", &num);
        if (num % 2 == 0)
            printf("0\n");
        else
            printf("1\n");
    }
}