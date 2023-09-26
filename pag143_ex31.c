#include<stdio.h>
void main()
{
    float N1,N2,N3,P1,P2,P3,M;
    scanf("%f" "%f" "%f", &N1,&N2,&N3);
    scanf("%f" "%f" "%f", &P1,&P2,&P3);
    M=(N1*P1)+(N2*P2)+(N3*P3)/(P1+P2+P3);

    if(M>=7)
    {
    printf("aprovado:");
    printf("%.2f\n", M);
    }
    else
    {
    printf("reprovado:");
    printf("%.2f\n", M);
    }
}
