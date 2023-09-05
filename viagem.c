#include <stdio.h>
void main()
{
    float T,V,D,LU;
    printf("escreva tempo e velocidade:");
 scanf("%f %f", &T, &V);
    D=T*V;
    LU=D/12;
    printf("%f V:\n %f T:\n %f D:\n %f LU:\n",V,T,D,LU);
}
