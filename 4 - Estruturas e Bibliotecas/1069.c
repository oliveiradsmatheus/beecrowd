#include <stdio.h>
#include <string.h>

int main(void) {
    int num, i = 0, j, k, diamante;
    char caso[1000];

    scanf("%d", &num);

    while (i < num) {
        scanf(" %s", caso);
        diamante = 0;

        for (j = 0; j < strlen(caso); j++) {
            if (caso[j] == '<')
                for (k = j; k < strlen(caso); k++)
                    if (caso[k] == '>') {
                        diamante++;
                        caso[k] = '.';
                        k = strlen(caso);
                    }
        }
        printf("%d\n", diamante);
        i++;
    }

    return 0;
}