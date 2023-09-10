#include<stdio.h>
#include<math.h>
int main()
{
    int A, B, C, D;
    printf("escreva o valor de A:");
    scanf("%i", &A);
    printf("escreva o valor de B:");
    scanf("%i", &B);
    printf("escreva o valor de C:");
    scanf("%i", &C);
    D = pow((A + B + C),2);
    printf("valor do quadrado da soma de A, B e C: %i", D);
}