#include <stdio.h>

int main() {
    int ent, i = 1, num;
    scanf("%d", &ent);
    while (i <= ent) {
        scanf("%d", &num);
        if (num == 0)
            printf("NULL\n");
        else {
            if (num % 2 == 0) {
                printf("EVEN ");
                if (num > 0)
                    printf("POSITIVE\n");
                else
                    printf("NEGATIVE\n");
            } else {
                printf("ODD ");
                if (num > 0)
                    printf("POSITIVE\n");
                else
                    printf("NEGATIVE\n");
            }
        }
        i++;

    }
    return 0;
}