#include<stdio.h>
float main()
{
    float P, M, Cm;
    printf("escreva o valor em pes:");
    scanf("%f",&P);
    M = P * 0.3048;
    Cm = M * 100;
    printf("valor convertido em metros: %.4f\n", M);
    printf("valor convertido em centimetros: %.2f\n", Cm);
} 