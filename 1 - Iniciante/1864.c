#include<stdio.h>
#include<string.h>

int main() {
    char citacao[100];
    int i, num;

    strcpy(citacao, "LIFE IS NOT A PROBLEM TO BE SOLVED");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
        printf("%c", citacao[i]);
    printf("\n");
}