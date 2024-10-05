#include <stdio.h>
#include <stdlib.h>

struct tplista {
    int elem;
    struct tplista *prox;
};
typedef struct tplista Lista;

struct tpdesc {
    int qtde;
    Lista *inicio, *fim;
};
typedef struct tpdesc Desc;

void Inicializar(Desc *D) {
    (*D).inicio = (*D).fim = NULL;
}

void Inserir(Desc *D, int elem) {
    Lista *nova = (Lista *) malloc(sizeof(Lista));
    nova->elem = elem;

    if ((*D).inicio == NULL) {
        nova->prox = nova;
        (*D).inicio = (*D).fim = nova;
        (*D).qtde++;
    } else {
        nova->prox = (*D).inicio;
        (*D).fim->prox = nova;
        (*D).fim = nova;
        (*D).qtde++;
    }
}

void Remover(Desc *D, Lista **ant, Lista **atual) {
    Lista *aux = *atual;
    *atual = (*atual)->prox;
    (*ant)->prox = *atual;
    if (aux == (*D).inicio)
        (*D).inicio = *atual;
    if (aux == (*D).fim)
        (*D).fim = *ant;
    free(aux);
}

void LimparDesc (Desc *D) {
    free((*D).inicio);
    (*D).inicio = (*D).fim = NULL;
}

int main(void) {
    Desc D;
    Lista *ant, *atual;
    int i, caso = 1, casos, pessoas, salto, pulo;

    Inicializar(&D);

    scanf("%d", &casos);
    while (casos--) {
        LimparDesc(&D);
        scanf("%d %d", &pessoas, &salto);
        i=1;
        while (pessoas--) {
            Inserir(&D, i);
            i++;
        }
        ant = D.fim;
        atual = D.inicio;
        while (atual != ant) {
            pulo = salto-1;
            while (pulo--) {
                atual = atual->prox;
                ant = ant->prox;
            }
            Remover(&D, &ant, &atual);
        }

        printf("Case %d: %d\n", caso, (D).inicio->elem);
        caso++;
    }
    return 0;
}