#include<stdio.h>

float main ()
{
    float V, C, L, A;
    printf("escreva o comprimento:");
    scanf("%f",&C);
    printf("escreva a largura:");
    scanf("%f",&L);
    printf("escreva altura:");
    scanf("%f",&A);
    V = C * A * L;
    printf("Volume: %.2f ", V);
}