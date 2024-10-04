#include<stdio.h>
#include<string.h>

int main() {
    int i, m = 0;
    char num[20];
    gets(num);
    for (i = 0; i < (strlen(num) - 1) && m != 1; i++)
        if (num[i] == '1' && num[i + 1] == '3')
            m = 1;
    if (m == 1)
        printf("%s es de Mala Suerte\n", num);
    else
        printf("%s NO es de Mala Suerte\n", num);
}