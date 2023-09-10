#include<stdio.h>
#include<math.h>
int main()
{
    int B, E, P;
    printf("escreva um valor para base:");
    scanf("%i", &B);
    printf("escreva um valor para o expoente:");
    scanf("%i", &E);
    P = pow(B,E);
    printf("potencia: %i ", P);
}