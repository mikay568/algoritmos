#include<stdio.h>
int main()
{
    int N, S, A;
    printf("escreva o numero desejado:");
    scanf("%i", &N);
    A = N - 1;
    printf("Antecessor: %i\n", A);
    S = N + 1;
    printf("Sucessor: %i\n", S);
}