#include <stdio.h>
#include <string.h>

int main(void) {
    char num1[32], num2[32];
    int qtde, pos1, pos2;

    scanf("%d", &qtde);

    while (qtde) {
        getchar();
        scanf("%s %s", num1, num2);

        if (strlen(num2) > strlen(num1))
            printf("nao encaixa\n");
        else {
            pos1 = strlen(num1) - strlen(num2);
            pos2 = 0;
            while (pos1 < strlen(num1) && num1[pos1] == num2[pos2]) {
                pos1++;
                pos2++;
            }
            if (num1[pos1] == '\0')
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
        qtde--;
    }
}