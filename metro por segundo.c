#include<stdio.h>
int main()
{
    float V, D, T;
    printf("escreva a distancia percorrida:");
    scanf("%f",&D);
    printf("escreva a duracao em que a distancia foi percorrida:");
    scanf("%f",&T);
    V = (D * 10) / (T * 36);
    printf("velocidade: %.2f m/s", V);    
}
    