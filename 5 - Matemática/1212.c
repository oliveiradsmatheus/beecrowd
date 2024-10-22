#include <stdio.h>
#include <string.h>

int main(void) {
    char num1[10], num2[10], aux[10], numero;
    int carry, i, j, n1, n2, qtdeCarry, dif;

    scanf("%s %s", num1, num2);
    while (strcmp(num1, "0") || strcmp(num2, "0")) {
        strcpy(aux, "\0");
        qtdeCarry = 0;
        carry = 0;
        i = (int) strlen(num1) - 1;
        j = (int) strlen(num2) - 1;

        dif = strlen(num1) - strlen(num2);
        if (dif > 0)
            numero = 2;
        else if (dif < 0) {
            numero = 1;
            dif *= -1;
        }
        while (dif--)
            strcat(aux, "0");
        if (numero == 1) {
            strcat(aux, num1);
            strcpy(num1, aux);
            i = strlen(num1) - 1;
        } else {
            if (numero == 2) {
                strcat(aux, num2);
                strcpy(num2, aux);
                j = strlen(num2) - 1;
            }
        }
        while (i >= 0 || j>=0) {
            n1 = num1[i] - '0';
            n2 = num2[j] - '0';
            if (n1 + n2 + carry > 9) {
                carry = 1;
                qtdeCarry++;
            } else
                carry = 0;
            i--;
            j--;
        }
        if (!qtdeCarry)
            printf("No carry operation.\n");
        else if (qtdeCarry == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", qtdeCarry);
        scanf("%s %s", num1, num2);
    }
    return 0;
}