#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int b=0, g=9.8, pi=3.14;
    float a=0, d, v, c, conta, ang;
    printf("Introduz um valor para a distância ao cesto:");
    scanf("%f",&d);
    printf("Introduz um valor para a velocidade inicial:");
    scanf("%f",&v);
    printf("Introduz um valor para o diâmetro do cesto:");
    scanf("%f",&c);
    while (a<89.90)
    {
        a=a+0.1;
        ang = ((a*pi)/180);
        conta =(v*v*(sin(2*ang)/g));

        if ((conta<=(d+(c/2))) && (conta>=(d-(c/2))))
        {
            b=1;
            printf ("Um ângulo aceitável é %.2f graus\n", a);
        }
    }
    if (b==0)
        printf("Não há ângulos possíveis");

    return 0;
}
