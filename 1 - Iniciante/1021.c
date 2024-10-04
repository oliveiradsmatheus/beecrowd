#include<stdio.h>
#include<math.h>

int main() {
    double n;
    int notas, moedas, ncem, ncinq, nvint, ndez, ncin, ndois, mumr, mcinq, mvc, mdez, mcin, mumc;

    scanf("%lf", &n);
    printf("NOTAS:\n");
    notas = floor(n);
    moedas = (n - notas) * 100;
    ncem = notas / 100;
    notas = notas % 100;
    ncinq = notas / 50;
    notas = notas % 50;
    nvint = notas / 20;
    notas = notas % 20;
    ndez = notas / 10;
    notas = notas % 10;
    ncin = notas / 5;
    notas = notas % 5;
    ndois = notas / 2;
    notas = notas % 2;
    mumr = notas;
    printf("%d nota(s) de R$ 100.00\n", ncem);
    printf("%d nota(s) de R$ 50.00\n", ncinq);
    printf("%d nota(s) de R$ 20.00\n", nvint);
    printf("%d nota(s) de R$ 10.00\n", ndez);
    printf("%d nota(s) de R$ 5.00\n", ncin);
    printf("%d nota(s) de R$ 2.00\n", ndois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", mumr);
    mcinq = moedas / 50;
    moedas = moedas % 50;
    mvc = moedas / 25;
    moedas = moedas % 25;
    mdez = moedas / 10;
    moedas = moedas % 10;
    mcin = moedas / 5;
    moedas = moedas % 5;
    mumc = moedas;
    printf("%d moeda(s) de R$ 0.50\n", mcinq);
    printf("%d moeda(s) de R$ 0.25\n", mvc);
    printf("%d moeda(s) de R$ 0.10\n", mdez);
    printf("%d moeda(s) de R$ 0.05\n", mcin);
    printf("%d moeda(s) de R$ 0.01\n", mumc);

    return 0;
}