#include<stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);
    while (num != 0) {
        for (i = 1; i <= num; i++) {
            printf("%d", i);
            if (i == num)
                printf("%c", '\n');
            else
                printf("%c", ' ');
        }
        scanf("%d", &num);
    }
}