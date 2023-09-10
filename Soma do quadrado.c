#include<stdio.h>
#include<math.h>
void main()
{
    int A, B, C, D;
    printf("escreva o valor de A:");
    scanf("%i",&A);
    printf("escreva o valor de B:");
    scanf("%i",&B);
    printf("escreva o valor de C:");
    scanf("%i",&C);
  D = pow(C,2) + pow(B,2) + pow(A,2);
  printf("Valor da soma dos quadrados de A, B e C: %i", D);   
} 