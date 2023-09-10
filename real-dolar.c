#include<stdio.h>
void main()
{
    float CD, QR, VD, VC, TQR;
    printf("Escreva cotacao do dolar atualmente:");
    scanf("%f",&CD);
    printf("Escreva a quantidade de reais disponiveis:");
    scanf("%f",&QR);
    printf("escreva o valor do dolar para convercao:");
    scanf("%f",&VD);
    VC = VD * CD;
    printf("valor convertido: %.2f RS\n", VC);
    TQR = QR + VC;
    printf("Total de reais agora: %.2f RS",TQR);
}