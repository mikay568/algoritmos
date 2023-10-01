#include<stdio.h>

void main ()
{ float NR;
printf("escreva um numero para saber se ele é maior, menor ou igual a 3\n");
 scanf("%f",&NR);
 if(3<NR)
 printf("numero real maior que 3:");
 if(NR<3)
 printf("numero real menor que 3:");
 if(NR==3)
 printf("numero real igual a 3:");
   }