#include<stdio.h>
#include<string.h>

int main() {
    int ent, i, poder;
    char nome[100];
    scanf("%d", &ent);
    for (i = 0; i < ent; i++) {
        scanf(" %s %d", nome, &poder);
        if (strcmp(nome, "Thor") == 0)
            printf("Y\n");
        else
            printf("N\n");
    }
}