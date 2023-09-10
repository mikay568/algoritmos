#include<stdio.h>
float main()
{
    float SM, PR, NS;
    printf("escreva SM:");
    scanf("%f",&SM);
    printf("escreva PR:");
    scanf("%f",&PR);
    NS = SM * (1 + PR/100);
    printf("NS: %.2f", NS);
    
}