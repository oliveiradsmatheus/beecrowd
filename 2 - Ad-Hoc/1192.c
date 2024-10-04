#include <stdio.h>

int main(void) {
    int qtde, num1, num2;
    char caso[4];

    scanf("%d", &qtde);
    while (qtde) {
        getchar();
        scanf("%s", caso);

        num1 = caso[0] - '0';
        num2 = caso[2] - '0';
        if (num1 == num2)
            printf("%d\n", num1 * num2);
        else if (caso[1] >= 'A' && caso[1] <= 'Z')
            printf("%d\n", num2 - num1);
        else if (caso[1] >= 'a' && caso[1] <= 'z')
            printf("%d\n", num1 + num2);
        qtde--;
    }
}