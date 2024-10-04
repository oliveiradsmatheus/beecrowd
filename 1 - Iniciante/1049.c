#include<stdio.h>
#include<string.h>
#define ts 100

int main() {
    char resp[ts];
    gets(resp);
    if (strcmp(resp, "vertebrado") == 0) {
        gets(resp);
        if (strcmp(resp, "ave") == 0) {
            gets(resp);
            if (strcmp(resp, "carnivoro") == 0)
                printf("aguia\n");
            else if (strcmp(resp, "onivoro") == 0)
                printf("pomba\n");
        } else if (strcmp(resp, "mamifero") == 0) {
            gets(resp);
            if (strcmp(resp, "onivoro") == 0)
                printf("homem\n");
            else if (strcmp(resp, "herbivoro") == 0)
                printf("vaca\n");
        }
    } else if (strcmp(resp, "invertebrado") == 0) {
        gets(resp);
        if (strcmp(resp, "inseto") == 0) {
            gets(resp);
            if (strcmp(resp, "hematofago") == 0)
                printf("pulga\n");
            else if (strcmp(resp, "herbivoro") == 0)
                printf("lagarta\n");
        } else if (strcmp(resp, "anelideo") == 0) {
            gets(resp);
            if (strcmp(resp, "hematofago") == 0)
                printf("sanguessuga\n");
            else if (strcmp(resp, "onivoro") == 0)
                printf("minhoca\n");
        }
    }
}