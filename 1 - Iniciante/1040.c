#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media, exame, mf;

    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    printf("Media: %.1f\n", media);
    if (media >= 7)
        printf("Aluno aprovado.\n");
    else if (media < 5)
        printf("Aluno reprovado.\n");
    else if (media >= 5 && media < 7) {
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        mf = (exame + media) / 2;
        if (mf >= 5)
            printf("Aluno aprovado.\nMedia final: %.1f\n", mf);
        else
            printf("Aluno reprovado.\nMedia final: %.1f\n", mf);
    }
    return 0;
}