#include <stdio.h>
void main()
{
    float V,TA,TE,P;
    printf("escreva valor,taxa,tempo:");
    scanf("%f %f %f",&V,&TA,&TE);
    P=V+(V*(TA/100)*TE);
    printf("%f",P);
    }
