#include<stdio.h>

int main()
{
    int A, B, C, N, BR;
    float PVV, PA, PB, PC, PN, PBR, Total;
    printf("escreva o numero de eleitores do candidato A:");
    scanf("%i", &A);
    printf("escreva o numero de eleitores do candidato B:");
    scanf("%i", &B);
    printf("escreva o numero de eleitores do candidato C:");
    scanf("%i", &C);
    printf("escreva o valor de votos Nulos:");
    scanf("%i", &N);
    printf("escreva o valor de votos Brancos:");
    scanf("%i", &BR);
    Total = A + B + C + N + BR;
    printf("total de votos: %.1f \n", Total);
    PVV = ((A + B + C) / Total) * 100;
    printf("Percentual dos votos validos: %.3f%%\n", PVV);
    PA = (A / Total) * 100;
    printf("percental dos votos validos do candidato A: %.3f%%\n", PA);
    PB = (B / Total) * 100;
    printf("percentual de votos validos do candidato B: %.3f%%\n", PB);
    PC = (C / Total) * 100;
    printf("percentual de votos validos do candidato C: %.3f%%\n", PC);
    PBR  = (BR / Total ) * 100;
    printf("percentual de votos em branco: %.3f%%\n", PBR);
    PN = (N / Total) * 100;
    printf("percentual de votos nulos: %.3f%%\n", PN); 
}