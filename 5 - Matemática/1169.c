#include <stdio.h>
#include <math.h>

int main (void)
{
    int casos, casas;
    double graos, kg;

    scanf("%d",&casos);
    while(casos)
    {
        scanf("%d", &casas);

        graos = 1;
        while(casas)
        {
            graos*=2;
            casas--;
        }

        kg = floor(graos/12/1000);
        printf("%.0f kg\n",kg);

        casos--;
    }
}