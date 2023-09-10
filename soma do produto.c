#include<stdio.h>
int main()
{
    int A, B, C, D, S, P;
    printf("escreva um valor para A:");
    scanf("%i", &A);
    printf("escreva um valor para B:");
    scanf("%i",&B );
    printf("escreva um valor para C:");
    scanf("%i",&C);
    printf("escreva um valor para D:");
    scanf("%i",&D);
    P = A * C;
    S = B + D;
    printf("Produto e a Soma: %i %i ", P, S);
}