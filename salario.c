#include <stdio.h>

void main()
{
    float VH,QHT,PD,SB,VD,SL;
    printf("escreva VH,QHT,PD\n");
    scanf("%f\n",&VH);
    scanf("%f\n",&QHT);
    scanf("%f\n",&PD);
    SB=VH*QHT;
    VD=SB*(PD/100);
    SL=SB-VD;
    printf("%2f",SL);
}
