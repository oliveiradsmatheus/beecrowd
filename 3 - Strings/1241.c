#include <stdio.h>
#include <string.h>

int main(void) {
    char Num1[1001], Num2[1001];
    int qtde, i = 0, pos1, pos2;

    scanf("%d", &qtde);

    while (i < qtde) {
        fflush(stdin);
        scanf("%s", Num1);
        fflush(stdin);
        scanf("%s", Num2);

        pos1 = strlen(Num1);
        pos2 = strlen(Num2);
        while (pos2 > 0 && Num2[pos2] == Num1[pos1]) {
            pos2--;
            pos1--;
        }

        if (pos2 == 0 && Num2[pos2] == Num1[pos1])
            printf("encaixa\n");
        else
            printf("nao encaixa\n");

        i++;
    }
}