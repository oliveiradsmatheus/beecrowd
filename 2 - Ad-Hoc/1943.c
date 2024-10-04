#include<stdio.h>

int main() {
    int ent;
    scanf("%d", &ent);
    if (ent == 1)
        printf("Top 1\n");
    else if (ent <= 3)
        printf("Top 3\n");
    else if (ent <= 5)
        printf("Top 5\n");
    else if (ent <= 10)
        printf("Top 10\n");
    else if (ent <= 25)
        printf("Top 25\n");
    else if (ent <= 50)
        printf("Top 50\n");
    else
        printf("Top 100\n");
}