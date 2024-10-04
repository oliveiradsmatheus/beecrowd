#include <stdio.h>
#include <string.h>

int main(void) {
    int esq, dir, i;
    char expr[1000];

    while (scanf(" %s", expr) != EOF) {
        i = 0;
        esq = 0;
        dir = 0;
        while (i < strlen(expr)) {
            if (expr[i] == '(')
                esq++;
            if (expr[i] == ')')
                dir++;
            if (dir > esq)
                i = strlen(expr);
            i++;
        }
        if (esq == dir)
            printf("correct\n");
        else
            printf("incorrect\n");
    }

    return 0;
}