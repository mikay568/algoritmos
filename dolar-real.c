#include<stdio.h>
void main()
{
    float CD, QD, VR, VC, TQD;
    printf("Escreva cotacao do dolar atualmente:");
    scanf("%f",&CD);
    printf("Escreva a quantidade de dolar(es) disponivel(is):");
    scanf("%f",&QD);
    printf("escreva o valor do reais para convercao:");
    scanf("%f",&VR);
    VC = VR / CD;
    printf("valor convertido: %.2f USS\n", VC);
    TQD = QD + VC;
    printf("Total de dolar(es) agora: %.2f USS",TQD);
}